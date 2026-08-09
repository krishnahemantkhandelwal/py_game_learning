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
#y = 1
current_piece = [[5, 1, random.choice(colors), 1]] #x, y, color, speed
#piece_falling = True        
#-------------------------------------------------------------------------------------------#
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
#---------------------------------------------------------------------#
    screen.fill((0, 0, 0))
    if current_piece != []:
        pygame.draw.rect(screen, current_piece[0][2], xy_calc(current_piece[0][0], current_piece[0][1]))
    for i in range(21):
        for j in range(11):
            if grid[i][j] != []:
                pygame.draw.rect(screen, grid[i][j], xy_calc(j,i))
    if current_piece != [] and current_piece[0][1]!=len(grid)-1 and grid[current_piece[0][1]+1][current_piece[0][0]] == []:
        current_piece[0][1] += current_piece[0][3]
    elif current_piece != []:
        grid[current_piece[0][1]][current_piece[0][0]].append(current_piece[0][2])
        current_piece.clear()
    pygame.display.flip()
    clock.tick(10)
    
pygame.quit()