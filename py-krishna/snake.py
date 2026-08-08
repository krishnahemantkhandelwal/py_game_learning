import pygame
import random
pygame.init()
WIDTH, HEIGHT = 600, 600
screen = pygame.display.set_mode((WIDTH,HEIGHT))
pygame.display.set_caption("Snake Game")
clock = pygame.time.Clock()
running = True
grid_interval = 30
#grid = [[0 for _ in range(21)] for _ in range(21)]         #commented as it can come helpful in future
snake = [[10, 10]]  # these r grid positions        # the body parts get appended
#         x   y
snakeheadcolor = (0, 100, 0)
snakebodycolor = (34, 139, 34)
snaketailcolor = (46, 204, 113)
direction = "right"
food = [16, 10]
def xy_calc(gridx, gridy, width, height):
    return (((gridx-1)*30),((gridy-1)*30), width, height)
game_state = "start"
score = 0
font = pygame.font.Font(None, 48)
snake_text = font.render("SNAKE", True, (0, 0, 0))
snake_text_rect = snake_text.get_rect(center=(300, 50))
mst10 = 0
food_eaten = False
#--------------------------------------------------------------------------#
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        if game_state == "running":
            if event.type == pygame.KEYDOWN:
                if (event.key == pygame.K_UP or event.key == pygame.K_w) and direction != "down":
                    direction = "up"
                elif (event.key == pygame.K_DOWN or event.key == pygame.K_s) and direction != "up":
                    direction = "down"
                elif (event.key == pygame.K_RIGHT or event.key == pygame.K_d) and direction != "left":
                    direction = "right"
                elif (event.key == pygame.K_LEFT or event.key == pygame.K_a) and direction != "right":
                    direction = "left"
        if game_state == "start":
            if event.type == pygame.KEYDOWN:
                game_state = "running"
        if game_state == "over" or game_state == "win":
                    if event.type == pygame.KEYDOWN:
                        if event.key == pygame.K_r:
                            game_state = "running"
                            snake[0] = [10, 10]
                            food = [16, 10]
                            for i in range(len(snake)-1, 0, -1):
                                del snake[i]
                            direction = "right"
                            score = 0
                            mst10 = 0
#--------------------------------------------------------------------------#
    score_text = font.render(f"{score}", True, (255, 255, 255))
    score_text_rect = score_text.get_rect(topright=(580,20))
    screen.fill((0, 255, 0))
    for i in range(HEIGHT):
        if i%30 != 0:
            for j in range(0, WIDTH, 30):
                pygame.draw.circle(screen, (100, 100, 100), (j, i), 1)
        else:
            for j in range(WIDTH):
                pygame.draw.circle(screen, (100, 100, 100), (j, i), 1)
    screen.blit(score_text, score_text_rect)
#--------------------------------------------------------------------------#
    if game_state == "start":
        screen.blit(snake_text, snake_text_rect)
        text = font.render("Press any key to start", True, (0, 0, 0))
        button_rect = pygame.Rect(325, 275, 400, 60)
        text_rect = text.get_rect(center=(WIDTH//2, HEIGHT//2))
        button_rect.center = (WIDTH//2, HEIGHT//2)
        text_rect.center = button_rect.center
        pygame.draw.rect(screen, (34, 177, 76), button_rect)
        screen.blit(text, text_rect)
#--------------------------------------------------------------------------#
    if game_state == "running":
        pygame.draw.rect(screen, (255, 0, 0), xy_calc(food[0], food[1], 30, 30))
        if len(snake) == 1:
            pygame.draw.rect(screen, snakeheadcolor, xy_calc(snake[0][0], snake[0][1], 30, 30))
        if len(snake) == 2:
            pygame.draw.rect(screen, snakeheadcolor, xy_calc(snake[0][0], snake[0][1], 30, 30))
            pygame.draw.rect(screen, snaketailcolor, xy_calc(snake[1][0], snake[1][1], 30, 30))
        else:
            pygame.draw.rect(screen, snakeheadcolor, xy_calc(snake[0][0], snake[0][1], 30, 30))
            for i in range(1, len(snake)-1):
                pygame.draw.rect(screen, snakebodycolor, xy_calc(snake[i][0], snake[i][1], 30, 30))
            pygame.draw.rect(screen, snaketailcolor, xy_calc(snake[-1][0], snake[-1][1], 30, 30))
        food_eaten = False
        
        #movement------------------------#
        if mst10%2 == 0:
            if snake[0] == food:
                food_eaten = True
                food_pos_check = False
                score +=1
                while not(food_pos_check):
                    food = [random.randint(1, 20), random.randint(1,20)]
                    if food not in snake:
                        food_pos_check = True
            if direction == "right":
                old_pos = snake[0][:]
                snake[0][0] += 1
                for i in range(1, len(snake)):
                    temp = snake[i]
                    snake[i] = old_pos
                    old_pos = temp
            elif direction == "left":
                old_pos = snake[0][:]
                snake[0][0] -= 1
                for i in range(1, len(snake)):
                    temp = snake[i]
                    snake[i] = old_pos
                    old_pos = temp
            elif direction == "up":
                old_pos = snake[0][:]
                snake[0][1] -= 1
                for i in range(1, len(snake)):
                    temp = snake[i]
                    snake[i] = old_pos
                    old_pos = temp
            elif direction == "down":
                old_pos = snake[0][:]
                snake[0][1] += 1
                for i in range(1, len(snake)):
                    temp = snake[i]
                    snake[i] = old_pos
                    old_pos = temp
            if food_eaten:
                snake.append(old_pos)
                food_eaten = False
            if (snake[0][0] > 20 or snake[0][0] < 1 or snake[0][1] > 20 or snake[0][1] < 1) or snake[0] in snake[1:]:
                game_state = "over"
            if score >=75:
                game_state = "win"
        mst10 += 1
#-------------------------------------------------------------------------------------------------#
    if game_state == "over":
        text = font.render("Game Over", True, (0, 0, 0))
        text_rect = text.get_rect(center=(WIDTH//2, HEIGHT//2))
        text2 = font.render("Press 'r' to restart", True, (0, 0, 0))
        text2_rect = text2.get_rect(center=(WIDTH//2, 350))
        button_rect = pygame.Rect(300, 300, 180, 60)
        button_rect.center = (WIDTH//2, HEIGHT//2) 
        pygame.draw.rect(screen, (34, 177, 76), button_rect, border_radius=10)
        screen.blit(text, text_rect)
        button_rect = pygame.Rect(300, 350, 300, 60)
        button_rect.center = (WIDTH//2, 350)
        pygame.draw.rect(screen, (34, 177, 76), button_rect, border_radius=10)
        screen.blit(text2, text2_rect)
#-------------------------------------------------------------------------------------------------#
    if game_state == "win":
        text = font.render("You Win!", True, (0, 0, 0))
        text_rect = text.get_rect(center=(WIDTH//2, HEIGHT//2))
        text2 = font.render("Press 'r' to restart", True, (0, 0, 0))
        text2_rect = text2.get_rect(center=(WIDTH//2, 350))
        text_button = pygame.Rect(300, 350, 300, 60)
        text_button.center = (WIDTH//2, 350)
        text2_rect.center = text_button.center
        pygame.draw.rect(screen, (34, 177, 76), text_button, border_radius=10)
        text_button = pygame.Rect(300, 350, 150, 60)
        text_button.center = (WIDTH//2, 300)
        text_rect.center = text_button.center
        pygame.draw.rect(screen, (34, 177, 76), text_button, border_radius=10)
        screen.blit(text, text_rect)
        screen.blit(text2, text2_rect)
    pygame.display.flip()
    clock.tick(10)
pygame.quit()