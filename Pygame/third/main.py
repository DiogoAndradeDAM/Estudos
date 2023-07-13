import pygame
from sys import exit

current_score=0

def print_score(): 
    score_surface = test_font.render(f"{current_score}", False, (64, 64, 64))
    score_rect = score_surface.get_rect(center=(400, 80))
    screen.blit(score_surface, score_rect)
    

pygame.init()
screen = pygame.display.set_mode((800, 400))
pygame.display.set_caption("Third Window")
clock = pygame.time.Clock()
game_active = True


ground = pygame.image.load("assets/graphics/ground.png")
sky = pygame.image.load("assets/graphics/sky.png")

snail = pygame.image.load("assets/graphics/snail/snail1.png")
snail_rect = snail.get_rect(midbottom = (600, 300))

player = pygame.image.load("assets/graphics/Player/player_stand.png")
player_rect = player.get_rect(midbottom = (80, 250))
player_gravity = 0
player_rotate = 0


jump_sound = pygame.mixer.Sound("assets/audio/jump.mp3")
bg_music = pygame.mixer.Sound("assets/audio/music.wav")
jump_sound.set_volume(0.5)
bg_music.play()
bg_music.set_volume(0.1)


test_font = pygame.font.Font("assets/font/Pixeltype.ttf", 64)
restart_text = test_font.render(f"Press Space to Restart", False, (94//2, 129//2, 162//2))
restart_text_rect = restart_text.get_rect(center=(400, 350))
restart_text2 = test_font.render(f"You lose", False, (94//2, 129//2, 162//2))
restart_text_rect2 = restart_text2.get_rect(center=(400, 50))


while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT or (event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE):
            pygame.quit()
            exit()

        if game_active:
            if event.type == pygame.KEYDOWN and player_rect.bottom >= 300:
                if event.key == pygame.K_SPACE:
                    player_gravity = -20
                    jump_sound.play()
            if event.type == pygame.MOUSEBUTTONDOWN and player_rect.bottom >= 300:
                if player_rect.collidepoint(event.pos):
                    player_gravity = -20
        else:
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_SPACE:
                    snail_rect.x = 600
                    current_score = 0
                    game_active = True
                    player_rotate = 0


    if game_active:
        screen.blit(sky, (0,0))
        screen.blit(ground, (0, 300))
        print_score()
        screen.blit(player, player_rect)

        player_gravity += 1
        player_rect.y += player_gravity
        if player_rect.bottom >= 300: player_rect.bottom = 300

        screen.blit(snail, snail_rect)
        if snail_rect.x < 0:
            snail_rect.x = screen.get_width()
            current_score += 1
        else:
            snail_rect.x -= 6

        if snail_rect.colliderect(player_rect):
            game_active = False
    else:
        screen.fill((94, 129, 162))
        player_zoom = pygame.transform.rotozoom(player, player_rotate, 2)
        player_zoom_rect = player_zoom.get_rect(center = (400, 200))
        player_rotate = player_rotate+1
        screen.blit(player_zoom, player_zoom_rect)
        screen.blit(restart_text, restart_text_rect)
        screen.blit(restart_text2, restart_text_rect2)

    pygame.display.update()
    clock.tick(60)

