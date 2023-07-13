import pygame, random
from sys import exit

pygame.init()

names=["Diogo", "Douglas", "Ziza", "Jose", "Pedro", "Beatriz"]

class TextBox:
    def __init__(self, text, font, font_size, textColor, x, y, width, height, color):
        self.font = pygame.font.Font(font, font_size)
        self.rect = pygame.Rect(x, y, width, height)
        self.text = self.font.render(text, False, textColor)
        self.text_pos = self.text.get_rect(center = (self.rect.x+(self.rect.width/2), self.rect.y+(self.rect.height/2)))
        self.color = color

    def draw(self, surface):
        pygame.draw.rect(surface, self.color, self.rect)
        surface.blit(self.text, self.text_pos)

class DraggableRect:
    def __init__(self, text_box, color):
        self.textbox = text_box
        self.color = color
        self.isDragging = False
        self.offset = (0,0)


    def handle_event(self, event):
        if event.type == pygame.MOUSEBUTTONDOWN and event.button == 1:
            if self.textbox.rect.collidepoint(event.pos):
                self.isDragging = True
                self.offset = (self.textbox.rect.x - event.pos[0], self.textbox.rect.y - event.pos[1])
        elif event.type == pygame.MOUSEBUTTONUP:
            self.isDragging = False
        elif event.type == pygame.MOUSEMOTION and self.isDragging:
            self.textbox.rect.x = event.pos[0] + self.offset[0]
            self.textbox.rect.y = event.pos[1] + self.offset[1]
            self.textbox.text_pos = self.textbox.text.get_rect(center = (self.textbox.rect.x+(self.textbox.rect.width/2), self.textbox.rect.y+(self.textbox.rect.height/2)))

    def draw(self, surface):
        self.textbox.draw(surface)


screen = pygame.display.set_mode((800, 600))
pygame.display.set_caption("Prototype of Etica game")

mytext_box = TextBox(names[random.randint(0,5)], "retro_gaming.ttf", 8, (0,0,0), 100, 100, 50, 50, (255, 255, 255))
drag_rect = DraggableRect(mytext_box, (255, 255, 255))

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT or (event.type == pygame.KEYDOWN and event.key == pygame.K_ESCAPE):
            pygame.quit()
            exit()

        drag_rect.handle_event(event)

    screen.fill("Black")

    drag_rect.draw(screen)

    pygame.display.flip()
        