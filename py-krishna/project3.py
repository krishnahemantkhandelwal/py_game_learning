import pygame

pygame.init()

WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("My First Game")
color = (255, 0, 0)
clock = pygame.time.Clock()
running = True
x = 325
y = 275
font = pygame.font.Font(None, 48)
text = font.render("START", True, (0, 0, 0))
textx = 400
texty = 300
start = False
while running:
    keys = pygame.key.get_pressed()
    button_rect = pygame.Rect(x, y, 150, 50)
    for event in pygame.event.get():
        if start:
            if keys[pygame.K_w]:
                y -= 5
                texty -= 5
            elif keys[pygame.K_s]:
                y += 5
                texty += 5
        if event.type == pygame.MOUSEBUTTONDOWN:
            if event.button == 1:
                mouse_x, mouse_y = pygame.mouse.get_pos()
                if button_rect.collidepoint((mouse_x, mouse_y)):
                    color = (0, 255, 0)
                    print("game started!")
                    start = True
        if event.type == pygame.QUIT:
            running = False
    text_rect = text.get_rect(center=(textx, texty))
    screen.fill((255,255,255))
    pygame.draw.rect(screen, color, button_rect)
    screen.blit(text, text_rect)
    pygame.display.flip()
    clock.tick(60)

pygame.quit()