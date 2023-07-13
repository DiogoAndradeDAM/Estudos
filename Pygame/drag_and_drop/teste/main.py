import pygame


class DraggableRect:
    def __init__(self, x, y, width, height, color):
        self.rect = pygame.Rect(x, y, width, height)
        self.color = color
        self.dragging = False
        self.offset = (0, 0)

    def handle_event(self, event):
        if event.type == pygame.MOUSEBUTTONDOWN and event.button == 1:
            if self.rect.collidepoint(event.pos):
                self.dragging = True
                self.offset = (self.rect.x - event.pos[0], self.rect.y - event.pos[1])
        elif event.type == pygame.MOUSEBUTTONUP and event.button == 1:
            self.dragging = False
        elif event.type == pygame.MOUSEMOTION and self.dragging:
            self.rect.x = event.pos[0] + self.offset[0]
            self.rect.y = event.pos[1] + self.offset[1]

    def draw(self, surface):
        pygame.draw.rect(surface, self.color, self.rect)


# Inicialização do Pygame
pygame.init()

# Configurações da janela
SCREEN_WIDTH = 800
SCREEN_HEIGHT = 600
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
pygame.display.set_caption("Drag and Drop")

# Cores
WHITE = (255, 255, 255)
RED = (255, 0, 0)

# Objeto retangular arrastável
draggable_rect = DraggableRect(100, 100, 100, 100, RED)

# Loop principal do jogo
running = True
while running:
    # Tratamento de eventos
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        draggable_rect.handle_event(event)

    # Preenchimento do fundo com branco
    screen.fill(WHITE)

    # Desenho do objeto retangular arrastável
    draggable_rect.draw(screen)

    # Atualização da tela
    pygame.display.flip()

# Encerramento do Pygame
pygame.quit()
