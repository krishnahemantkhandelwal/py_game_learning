import pygame
import random
pygame.init()

WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("My First Game")

clock = pygame.time.Clock()
running = True
x1 = 375
y1 = 275
x2 = 375
y2 = 275
x3 = 375
y3 = 275
x4 = 375
y4 = 275
speed1 = 2
speed2 = 2
speed3 = 2
speed4 = 2
color1 = (255, 0, 0)
color2 = (0, 255, 0)
color3 = (0, 0, 255)
color4 = (255, 255, 0)
while running:
    # Check events
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
    screen.fill((255, 255, 255))  # Fill the screen with white
    x1 += speed1
    y1 += speed1
    x2 -= speed2
    y2 += speed2
    x3 += speed3
    y3 -= speed3
    x4 -= speed4
    y4 -= speed4
    if (x1 > WIDTH-50 or x1 < 0) or (y1 > HEIGHT-50 or y1 < 0):
        speed1 = -speed1
    if (x2 > WIDTH-50 or x2 < 0) or (y2 > HEIGHT-50 or y2 < 0):
        speed2 = -speed2
    if (x3 > WIDTH-50 or x3 < 0) or (y3 > HEIGHT-50 or y3 < 0):
        speed3 = -speed3
    if (x4 > WIDTH-50 or x4 < 0) or (y4 > HEIGHT-50 or y4 < 0):
        speed4 = -speed4
    pygame.draw.rect(screen, color1, (x1, y1, 50, 50))
    pygame.draw.rect(screen, color2, (x2, y2, 50, 50))
    pygame.draw.rect(screen, color3, (x3, y3, 50, 50))
    pygame.draw.rect(screen, color4, (x4, y4, 50, 50))
    # Show everything
    pygame.display.flip()

    # Limit FPS
    clock.tick(60)

pygame.quit()