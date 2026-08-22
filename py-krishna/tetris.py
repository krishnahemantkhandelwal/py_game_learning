import pygame
import random
import numpy as np
pygame.init()

WIDTH, HEIGHT = 300, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Tetris")
clock = pygame.time.Clock()
running = True
font = pygame.font.Font(None, 48)
grid = [
    [[] for _ in range(11)] for _ in range(21)
]
colors = [(255,0,0), (0,255,0), (0,0,255), (255,255,0), (255,0,255), (0, 255, 255), (255, 127, 0)]
def xy_calc(gridx, gridy, width=30, height=30):
    return (((gridx-1)*30), ((gridy-1)*30), width, height)
def add_piece(xy:list, speed=1):
    return [xy, random.choice(colors), speed, [5,1]]

shape = {
    "O": {
        1: np.array([0, 0]),
        2: np.array([1, 0]),
        3: np.array([0, 1]),
        4: np.array([1, 1]),
        
    },
    "I": {
        1: np.array([0, 0]),
        2: np.array([1, 0]),
        3: np.array([2, 0]),
        4: np.array([-1, 0]),
        
    },
    "T": {
        1: np.array([0, 0]),
        2: np.array([1, 0]),
        3: np.array([-1, 0]),
        4: np.array([0, 1]),
        
    },
    "L": {
        1: np.array([0, 0]),
        2: np.array([0, 1]),
        3: np.array([0, 2]),
        4: np.array([1, 2]),
        
    },
    "J": {
        1: np.array([0, 0]),
        2: np.array([0, 1]),
        3: np.array([0, 2]),
        4: np.array([-1, 2]),
        
    },
    "S": {
        1: np.array([0, 0]),
        2: np.array([1, 0]),
        3: np.array([0, 1]),
        4: np.array([-1, 1]),
        
    },
    "Z": {
        1: np.array([0, 0]),
        2: np.array([-1, 0]),
        3: np.array([0, 1]),
        4: np.array([1, 1]),
    }
}
rand_piece = random.choice(["I", "O", "T", "S", "Z", "J", "L"])
current_piece = [[shape[rand_piece][1], shape[rand_piece][2], shape[rand_piece][3], shape[rand_piece][4]], random.choice(colors), 1, [5,1]]
def rotate(x, y):
    return [y, -x]
def move(direction, current):
    if direction == "right":
        movement = 1
    else:
        movement = -1
    move_condn = True
    for i in range(len(current[0])):
        if 1 > current[0][i][0]+current[3][0]+movement or current[0][i][0]+current[3][0]+movement > 10:
            move_condn = False
            break
    if move_condn:
            for i in range(len(current[0])):
                if grid[current[0][i][1]+current[3][1]][current[0][i][0]+current[3][0]+movement] != []:
                    move_condn = False
                    break
    return move_condn
fps = 20
block_move_timer = 0
score = 0
game_state = "start"
#-----------------------------------------------------------------------------------------------------------------------------------------------#
while running:
    fast_move = False
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        if game_state == "running":
            if event.type == pygame.KEYDOWN:
                if current_piece != []:
                    if event.key == pygame.K_UP:
                        old_pos = current_piece[0][:]
                        for i in range(4):
                            current_piece[0][i] = rotate(current_piece[0][i][0], current_piece[0][i][1])
                            if (current_piece[0][i][1]+current_piece[3][1] < 0 or current_piece[0][i][1]+current_piece[3][1] > 20 or current_piece[0][i][0]+current_piece[3][0] < 1 or current_piece[0][i][0]+current_piece[3][0] > 10) or grid[current_piece[0][i][1] + current_piece[3][1]][current_piece[0][i][0] + current_piece[3][0]] != []:
                                current_piece[0] = old_pos
                                break
        if game_state == "start" and event.type == pygame.MOUSEBUTTONDOWN:
            if event.button == 1:
                mouse_x, mouse_y = pygame.mouse.get_pos()
                button_rect = pygame.Rect((WIDTH//2)-75, (HEIGHT//2)-25, 150, 50)
                if button_rect.collidepoint((mouse_x, mouse_y)):
                    game_state = "running"
    if game_state == "running":
        if current_piece != []:
            keys = pygame.key.get_pressed()
            if keys[pygame.K_RIGHT]:
                if move("right", current_piece):
                    current_piece[3][0] += 1
            if keys[pygame.K_LEFT]:
                if move("left", current_piece):
                    current_piece[3][0] += -1
            if keys[pygame.K_DOWN]:
                fast_move = True
    screen.fill((0, 0, 0))
#-------------------------------------------------------------------------------------------------------------------#
    if game_state == "start":
        start_text = font.render("Start", True, (0, 0, 50))
        button_rect = pygame.Rect((WIDTH//2)-75, (HEIGHT//2)-25, 150, 50)
        start_text_rect = start_text.get_rect(center=(WIDTH//2, HEIGHT//2))
        start_text_rect.center = button_rect.center
        pygame.draw.rect(screen, (0, 255, 0), button_rect)
        screen.blit(start_text, start_text_rect)
    if game_state == "running":    
        if current_piece == []:
            rand_piece = random.choice(["I", "O", "T", "S", "Z", "J", "L"])
            current_piece = add_piece([shape[rand_piece][1], shape[rand_piece][2], shape[rand_piece][3], shape[rand_piece][4]])
        if current_piece != []:
            for i in current_piece[0][:]:
                pygame.draw.rect(screen, current_piece[1], xy_calc(i[0]+current_piece[3][0], i[1]+current_piece[3][1]))
                pygame.draw.rect(screen, (0, 0, 0), xy_calc(i[0]+current_piece[3][0], i[1]+current_piece[3][1]), 2)
        for i in range(21):
            for j in range(11):
                if grid[i][j] != []:
                    pygame.draw.rect(screen, grid[i][j][0], xy_calc(j,i))
                    pygame.draw.rect(screen, (0, 0, 0), xy_calc(j, i), 2)
        score_text = font.render(f"{score}", True, (255, 255, 255))
        screen.blit(score_text, xy_calc(8, 1))
        if block_move_timer % fps == 0 or fast_move:
            moving_condition = current_piece != []
            if moving_condition:
                for i in range(len(current_piece[0])):
                    if current_piece[0][i][1]+current_piece[3][1]==len(grid)-1:
                        moving_condition = False
                        break
            if moving_condition:
                for i in range(len(current_piece[0])):
                    if  grid[current_piece[0][i][1]+current_piece[3][1]+1][current_piece[0][i][0]+current_piece[3][0]] != []:
                        moving_condition = False
                        break
            if moving_condition:
                current_piece[3][1] += current_piece[2]
            elif current_piece != []:
                for i in current_piece[0][:]:
                    grid[i[1]+current_piece[3][1]][i[0]+current_piece[3][0]].append(current_piece[1])
                current_piece.clear()
                line_clear = []
                for i in range(len(grid)):
                    line = True
                    for j in range(1, 11):
                        if grid[i][j] == []:
                            line = False
                            break
                    if line:
                        line_clear.append(i)

                for i in line_clear:
                    for j in range(len(grid[i])):
                        pygame.draw.rect(screen, (212, 175, 55), xy_calc(j, i))
                if len(line_clear) == 1:
                    score += 100
                elif len(line_clear) == 2:
                    score += 300
                elif len(line_clear) == 3:
                    score += 500
                elif len(line_clear) == 4:
                    score += 800
                grid = [row for i, row in enumerate(grid) if i not in line_clear]
                while len(grid) < 21:
                    grid.insert(0, [[] for _ in range(11)])
        for i in grid[1]:
            if i != []:
                game_state = "end"
                break
        block_move_timer += 1
    if game_state == "end":
        end_text = font.render("!Game Over!", True, (210, 24, 24))
        screen.blit(end_text, xy_calc(2.75, 3, 150, 75))
        pygame.draw.rect(screen, (210, 24, 24), xy_calc(5.5, 12))
        pygame.draw.rect(screen, (210, 24, 24), xy_calc(4.5, 11))
        pygame.draw.rect(screen, (210, 24, 24), xy_calc(4.5, 13))
        pygame.draw.rect(screen, (210, 24, 24), xy_calc(6.5, 13))
        pygame.draw.rect(screen, (210, 24, 24), xy_calc(7.5, 14))
        pygame.draw.rect(screen, (210, 24, 24), xy_calc(3.5, 14))
        pygame.draw.rect(screen, (210, 24, 24), xy_calc(3.5, 10))
        pygame.draw.rect(screen, (210, 24, 24), xy_calc(6.5, 11))
        pygame.draw.rect(screen, (210, 24, 24), xy_calc(7.5, 10))
    pygame.display.flip()
    clock.tick(fps)
    
pygame.quit()