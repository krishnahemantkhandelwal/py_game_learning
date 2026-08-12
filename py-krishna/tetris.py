import pygame
import random
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
    return [xy, random.choice(colors), speed]
current_piece = [[[5, 1], [6, 1], [5, 2], [6, 2]], random.choice(colors), 1] #x, y, color, speed
shape = {
    "O": {
        1: [5, 1],
        2: [6, 1],
        3: [5, 2],
        4: [6, 2],
        "bottum blocks": [3, 4]
    },
    "I": {
        1: [5, 1],
        2: [6, 1],
        3: [7, 1],
        4: [4, 1],
        "bottum blocks": [1, 2, 3, 4]
    },
    "T": {
        1: [5, 1],
        2: [6, 1],
        3: [4, 1],
        4: [5, 2],
        "bottum blocks": [2, 3, 4]
    },
    "L": {
        1: [5, 1],
        2: [5, 2],
        3: [5, 3],
        4: [6, 3],
        "bottum blocks": [3, 4]
    },
    "J": {
        1: [5, 1],
        2: [5, 2],
        3: [5, 3],
        4: [4, 3],
        "bottum blocks": [3, 4]
    },
    "S": {
        1: [5, 1],
        2: [6, 1],
        3: [5, 2],
        4: [4, 2],
        "bottum blocks": [2, 3, 4]
    },
    "Z": {
        1: [5, 1],
        2: [4, 1],
        3: [5, 2],
        4: [6, 2],
        "bottum blocks": [2, 3, 4]
    }
}
#-------------------------------------------------------------------------------------------#
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
#---------------------------------------------------------------------#
    screen.fill((0, 0, 0))
    if current_piece == []:
        current_piece = add_piece([[5, 1], [6, 1], [5, 2], [6, 2]])
    if current_piece != []:
        for i in current_piece[0][:]:
            pygame.draw.rect(screen, current_piece[1], xy_calc(i[0], i[1]))
    for i in range(21):
        for j in range(11):
            if grid[i][j] != []:
                pygame.draw.rect(screen, grid[i][j][0], xy_calc(j,i))
    if current_piece != [] and (current_piece[0][2][1]!=len(grid)-1 and current_piece[0][3][1]!=len(grid)-1) and (grid[current_piece[0][2][1]+1][current_piece[0][2][0]] == [] and grid[current_piece[0][3][1]+1][current_piece[0][3][0]] == []):
        for i in current_piece[0][:]:
            i[1] += current_piece[2]
    elif current_piece != []:
        for i in current_piece[0][:]:
            grid[i[1]][i[0]].append(current_piece[1])
        current_piece.clear()
    pygame.display.flip()
    clock.tick(10)
    
pygame.quit()