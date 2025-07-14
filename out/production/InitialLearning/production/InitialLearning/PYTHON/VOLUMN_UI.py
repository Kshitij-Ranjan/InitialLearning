import pygame
import time

# Initialize pygame
pygame.init()

# Constants
WIDTH, HEIGHT = 500, 250
WHITE = (255, 255, 255)
PURPLE = (120, 80, 160)
GRAY = (200, 200, 200)
BLACK = (0, 0, 0)

# Screen setup
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Hold to Set Volume")

# Volume button (visual only, now triggered by spacebar)
button_rect = pygame.Rect(50, 100, 50, 50)
fill_amount = 0  # Filling animation
holding = False
hold_start_time = 0

# Ball properties
ball_x = 250  # Default start position
ball_y = 80
ball_radius = 10
falling = False

# Bar
bar_x, bar_y, bar_width, bar_height = 150, 150, 300, 5

clock = pygame.time.Clock()

running = True
while running:
    screen.fill(WHITE)

    # Event handling
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_SPACE:  # Spacebar pressed
                holding = True
                hold_start_time = time.time()
                fill_amount = 0
        elif event.type == pygame.KEYUP:
            if event.key == pygame.K_SPACE and holding:  # Spacebar released
                holding = False
                hold_duration = time.time() - hold_start_time
                volume_percentage = min(hold_duration / 2, 1)  # Max hold time of 2 sec = 100%
                ball_x = bar_x + volume_percentage * bar_width
                falling = True

    # Fill button animation
    if holding:
        fill_amount = min((time.time() - hold_start_time) / 2, 1) * 50  # Max fill in 2 sec
    pygame.draw.rect(screen, GRAY, button_rect, border_radius=10)
    pygame.draw.rect(screen, PURPLE, (button_rect.x, button_rect.y + 50 - fill_amount, 50, fill_amount), border_radius=10)

    # Draw bar
    pygame.draw.rect(screen, GRAY, (bar_x, bar_y, bar_width, bar_height))

    # Ball movement
    if falling:
        if ball_y < bar_y - ball_radius:
            for i in range(0,5):
                ball_y += i  # Simulated fall speed
        else:
            falling = False
    pygame.draw.circle(screen, PURPLE, (int(ball_x), int(ball_y)), ball_radius)

    pygame.display.flip()
    clock.tick(60)

pygame.quit()
