import pygame
import random
pygame.init()

WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Pong Game")
ball_color = (255, 128, 0)
clock = pygame.time.Clock()
running = True
ballx = 400
bally = 300
speed_ballx = 5
speed_bally = 5
ball_rect = pygame.Rect(ballx-20, bally-20, 40, 40)
class Paddle:
    def __init__(self, x , y, speed, color):
        self.speed = speed
        self.color = color
        self.width = 30
        self.height = 120
        self.rect = pygame.Rect(x, y, self.width, self.height)
paddle1 = Paddle(35, 250, 5, (0, 0, 255))
paddle2 = Paddle(735, 250, 5, (255, 0, 0))
font = pygame.font.Font(None, 48)
pong_text = font.render("PONG", True, (0, 0, 0))
pong_text_rect = pong_text.get_rect(center=(400, 50))
started = False
bounce_count = 0
line1_rect = pygame.Rect(WIDTH, 0, 3, HEIGHT)
line2_rect = pygame.Rect(0, 0, 3, HEIGHT)
player1_score = 0
player2_score = 0
win = False
player_won = 0
end = False
#---------------------------------------------------------------------------------#
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        if not(started) and event.type == pygame.MOUSEBUTTONDOWN:
            if event.button == 1:
                mouse_x, mouse_y = pygame.mouse.get_pos()
                button_rect = pygame.Rect(325, 275, 150, 50)
                if button_rect.collidepoint((mouse_x, mouse_y)):
                    started = True
    keys = pygame.key.get_pressed()
    if started:
        if keys[pygame.K_w]:
            if paddle1.rect.y > 0:
                paddle1.rect.y -= paddle1.speed
        if keys[pygame.K_s]:
            if paddle1.rect.y < HEIGHT - paddle1.height:
                paddle1.rect.y += paddle1.speed
        if keys[pygame.K_UP]:
            if paddle2.rect.y > 0:
                paddle2.rect.y -= paddle2.speed
        if keys[pygame.K_DOWN]:
            if paddle2.rect.y < HEIGHT - paddle2.height:
                paddle2.rect.y += paddle2.speed
    #---------------------------------------------------------------------------------#
    screen.fill((255,255,255))
    screen.blit(pong_text, pong_text_rect)
    p1_score_text = font.render(f"{player1_score}", True, (0, 0, 0))
    p2_score_text = font.render(f"{player2_score}", True, (0, 0, 0))
    screen.blit(p1_score_text, (WIDTH//4, 50))
    screen.blit(p2_score_text, (3*WIDTH//4, 50))
    if not(started):
        text = font.render("START", True, (0, 0, 0))
        button_rect = pygame.Rect(325, 275, 150, 50)
        
        text_rect = text.get_rect(center=(WIDTH//2, HEIGHT//2))
        text_rect.center = button_rect.center
        pygame.draw.rect(screen, (0, 255, 0), button_rect)
        screen.blit(text, text_rect)
    #---------------------------------------------------------------------------------#
    if started and not(end):
        pygame.draw.circle(screen, ball_color, (ballx, bally), 20)
        pygame.draw.rect(screen, paddle1.color, paddle1.rect)
        pygame.draw.rect(screen, paddle2.color, paddle2.rect)
        pygame.draw.line(screen, (0, 0, 0,), (WIDTH, 0), (WIDTH, HEIGHT), 3)
        pygame.draw.line(screen, (0, 0, 0,), (0, 0), (0, HEIGHT), 3)
        if ball_rect.colliderect(paddle1.rect):
            if ball_rect.centery - paddle1.rect.centery == 0:    
                speed_bally = random.choice([-1, 1])
            else:
                speed_bally = (ball_rect.centery - paddle1.rect.centery) // 10
            speed_ballx = -speed_ballx

            bounce_count += 1
        if ball_rect.colliderect(paddle2.rect):
            if ball_rect.centery - paddle2.rect.centery == 0:    
                speed_bally = random.choice([-1, 1])
            else:
                speed_bally = (ball_rect.centery - paddle2.rect.centery) // 10
            speed_ballx = -speed_ballx
            bounce_count += 1
        ballx += speed_ballx
        if bounce_count != 0:
            bally += speed_bally
        ball_rect.center = (ballx, bally)
        if bally >= HEIGHT - 20:
            speed_bally = -speed_bally
        if bally <= 20:
            speed_bally = -speed_bally
        if ball_rect.colliderect(line1_rect):
            ballx = 400
            bally = 300
            ball_rect.center = (ballx, bally)
            bounce_count = 0
            player1_score += 1
            paddle1.rect.y = 250
            paddle2.rect.y = 250
            if player1_score >= 10:
                win = True
                player_won = 1
                end = True
            speed_ballx = random.choice([-5, 5])
            speed_bally = random.choice([-5, 5])
        if ball_rect.colliderect(line2_rect):
            ballx = 400
            bally = 300
            ball_rect.center = (ballx, bally)
            bounce_count = 0
            player2_score += 1
            paddle1.rect.y = 250
            paddle2.rect.y = 250
            if player2_score >= 10:
                win = True
                player_won = 2
                end = True
            speed_ballx = random.choice([-5, 5])
            speed_bally = random.choice([-5, 5])
    if win:
        text1 = font.render("GAME OVER", True, (0, 0, 0))
        text_rect1 = text1.get_rect(center=(WIDTH//2, HEIGHT//2))
        screen.blit(text1, text_rect1)
        text2 = font.render(f"!!!PLAYER {player_won} WON!!!", True, (0, 0, 0))
        text_rect2 = text2.get_rect(center=(WIDTH//2, HEIGHT//2 + 50))
        screen.blit(text2, text_rect2)
    pygame.display.flip()
    clock.tick(60)

pygame.quit()