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
y = 1
current_piece = [[5, y, random.choice(colors), 1]] #x, y, color, speed
grid[y][5] = [5, y, random.choice(colors)]
#--------------------------------------------------------------------#
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    screen.fill((0, 0, 0))
    pygame.draw.rect(screen, grid[y][5][2], xy_calc(5, y))
    if y!=20:
        if grid[y+1][5] == []:
            temp = current_piece[0][:] 
            grid[y][5].clear()
            y+=1
            grid[y][5] = temp
    pygame.display.flip()
    clock.tick(10)
    
pygame.quit()