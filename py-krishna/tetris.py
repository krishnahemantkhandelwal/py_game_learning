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
rand_piece = random.choice(["O", "I", "T", "S", "Z", "J", "L"])
#current_piece = [[shape[rand_piece][1]+[5, 1], shape[rand_piece][2]+[5, 1], shape[rand_piece][3]+[5, 1], shape[rand_piece][4]+[5, 1]], random.choice(colors), 1] #x, y, color, speed
current_piece = [[shape[rand_piece][1], shape[rand_piece][2], shape[rand_piece][3], shape[rand_piece][4]], random.choice(colors), 1, [5,1]] #x, y, color, speed
def rotate(x, y):
    return [y, -x]
def move(direction, current):
    if direction == "right":
        movement = 1
    else:
        movement = -1
    move_condn = True
    # for i in range(len(current[0])):
    #     if grid[current[0][i][1]+current[3][1]][current[0][i][0]+current[3][0]+movement] != []:
    #         move_condn = False
    #         break
    for i in range(len(current[0])):
        if 1 > current[0][i][0]+current[3][0]+movement or current[0][i][0]+current[3][0]+movement > 10:
            move_condn = False
            break
        # if current[0][i][0]+current[3][0] == 10:
        #     if direction == "right":
        #         move_condn = False
        #         break
    if move_condn:
            for i in range(len(current[0])):
                if grid[current[0][i][1]+current[3][1]][current[0][i][0]+current[3][0]+movement] != []:
                    move_condn = False
                    break
    return move_condn
#-------------------------------------------------------------------------------------------#
while running:
    fast_move = 1
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        if event.type == pygame.KEYDOWN:
            if current_piece != []:
                if event.key == pygame.K_UP:
                    old_pos = current_piece[0][:]
                    for i in range(4):
                        current_piece[0][i] = rotate(current_piece[0][i][0], current_piece[0][i][1])
                        if  1 >= current_piece[0][i][1] >= 20 or 1 >= current_piece[0][i][0] >= 10:
                            current_piece[0] = old_pos
                            break
    if current_piece != []:
        keys = pygame.key.get_pressed()
        if keys[pygame.K_RIGHT]:
            if move("right", current_piece):
                current_piece[3][0] += 1
        if keys[pygame.K_LEFT]:
            if move("left", current_piece):
                current_piece[3][0] += -1
        if keys[pygame.K_DOWN]:
            fast_move = 2
#---------------------------------------------------------------------#
    screen.fill((0, 0, 0))
    if current_piece == []:
        rand_piece = random.choice(["O", "I", "T", "S", "Z", "J", "L"])
        current_piece = add_piece([shape[rand_piece][1], shape[rand_piece][2], shape[rand_piece][3], shape[rand_piece][4]])
    if current_piece != []:
        for i in current_piece[0][:]:
            pygame.draw.rect(screen, current_piece[1], xy_calc(i[0]+current_piece[3][0], i[1]+current_piece[3][1]))
            pygame.draw.rect(screen, (0, 0, 0), xy_calc(i[0]+current_piece[3][0], i[1]+current_piece[3][1]), 3)
    for i in range(21):
        for j in range(11):
            if grid[i][j] != []:
                pygame.draw.rect(screen, grid[i][j][0], xy_calc(j,i))
                pygame.draw.rect(screen, (0, 0, 0), xy_calc(j, i), 3)
    for _ in range(fast_move):
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
        if moving_condition: #and current_piece != [] and (current_piece[0][0][1]+current_piece[3][1]!=len(grid)-1 and current_piece[0][1][1]+current_piece[3][1]!=len(grid)-1 and current_piece[0][2][1]+current_piece[3][1]!=len(grid)-1 and current_piece[0][3][1]+current_piece[3][1]!=len(grid)-1) and (grid[current_piece[0][0][1]+current_piece[3][1]+1][current_piece[0][0][0]+current_piece[3][0]] == [] and grid[current_piece[0][1][1]+current_piece[3][1]+1][current_piece[0][1][0]+current_piece[3][0]] == [] and grid[current_piece[0][2][1]+current_piece[3][1]+1][current_piece[0][2][0]+current_piece[3][0]] == [] and grid[current_piece[0][3][1]+current_piece[3][1]+1][current_piece[0][3][0]+current_piece[3][0]] == []):
            current_piece[3][1] += current_piece[2]
            # for i in current_piece[0][:]:
            #     i[1] += current_piece[2]
        elif current_piece != []:
            for i in current_piece[0][:]:
                grid[i[1]+current_piece[3][1]][i[0]+current_piece[3][0]].append(current_piece[1])
            current_piece.clear()
    line_clear = []
    for i in range(len(grid)):
        line = True
        for j in range(len(grid[i])):
            if grid[i][j] == []:
                line = False
                break
        if line:
            line_clear.append(i)
    for i in range(len(line_clear)):
        for j in range(len(grid[i])):
            pygame.draw.rect(screen, (212, 175, 55), xy_calc(j,i))
    for i in line_clear[:]:
        for j in range(len(grid[i])):
            grid[i][j].clear()
    # for i in line_clear[:]:
    #     for j in grid[:i:-1][:]:
    #         for k in j[:]:
    #             pass
    # stop_loop = False    
    # for i in line_clear[:]:
    #     for j in range(len(grid)-1, i, -1):
    #         for k in grid[j][:]:
    #             if grid[j][k] != []:
    #                 temp = grid[j][k][:]
    #                 grid[j][k].clear()
    #                 grid[j][k+1].append(temp)
    for i in reversed(line_clear):
        grid.pop(i)
        grid.insert(0, [[] for _ in range(11)])
    pygame.display.flip()
    clock.tick(7)
    
pygame.quit()