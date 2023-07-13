import pygame
from sys import exit

#Display surface : the window, is static and support all
#Regular surface : the image that draw in Display Surface, is dynamic

pygame.init()
screen = pygame.display.set_mode((800, 600))
pygame.display.set_caption("First Window")
clock = pygame.time.Clock()

#Square
test_surface = pygame.Surface((100,100))
test_surface.fill("Red")

#Image
test_image = pygame.image.load("player.png")

#Text
test_font = pygame.font.Font("retro_gaming.ttf", 32)
test_text = test_font.render("Hello World", False, "White")

while(True):
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            exit()

    screen.blit(test_surface, (0,0))
    screen.blit(test_image, (200,200))
    screen.blit(test_text, (screen.get_width()/2, 100))

    pygame.display.update()
    clock.tick(60)

