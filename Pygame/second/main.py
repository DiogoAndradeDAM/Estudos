import pygame
from sys import exit

pygame.init()
screen = pygame.display.set_mode((800, 600))
pygame.display.set_caption("The window")

player = pygame.image.load("player.png")
player_rect = player.get_rect(center=(200,500))

font = pygame.font.Font("retro_gaming.ttf", 64)
text = font.render("Score", False, 'Red')
text_rect = text.get_rect()

clock = pygame.time.Clock()

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            exit()

        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_RIGHT:
                player_rect.x += 5
            elif event.key == pygame.K_LEFT:
                player_rect.x -= 5
                
        if event.type == pygame.KEYUP:
            print("key up")

    screen.blit(pygame.image.load("logo2.png"), (0,0))

    screen.blit(player, player_rect)

    pygame.draw.rect(screen, "Pink", text_rect)
    screen.blit(text, text_rect)



    pygame.display.update()
    clock.tick(60)