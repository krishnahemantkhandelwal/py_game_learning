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
    return [xy, random.choice(colors), speed]

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
current_piece = [[shape[rand_piece][1]+[5, 1], shape[rand_piece][2]+[5, 1], shape[rand_piece][3]+[5, 1], shape[rand_piece][4]+[5, 1]], random.choice(colors), 1] #x, y, color, speed
def rotate(x, y):
    return [y, -x]
#-------------------------------------------------------------------------------------------#
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        if event.type == pygame.K_UP:
            pass
#---------------------------------------------------------------------#
    screen.fill((0, 0, 0))
    if current_piece == []:
        rand_piece = random.choice(["O", "I", "T", "S", "Z", "J", "L"])
        current_piece = add_piece([shape[rand_piece][1]+[5, 1], shape[rand_piece][2]+[5, 1], shape[rand_piece][3]+[5, 1], shape[rand_piece][4]+[5, 1]])
    if current_piece != []:
        for i in current_piece[0][:]:
            pygame.draw.rect(screen, current_piece[1], xy_calc(i[0], i[1]))
            pygame.draw.rect(screen, (0, 0, 0), xy_calc(i[0], i[1]), 3)
    for i in range(21):
        for j in range(11):
            if grid[i][j] != []:
                pygame.draw.rect(screen, grid[i][j][0], xy_calc(j,i))
                pygame.draw.rect(screen, (0, 0, 0), xy_calc(j, i), 3)
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