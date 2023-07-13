#pragma once

#include <SDL2\SDL.h>
#include <SDL2\SDL_image.h>
#include <iostream>

#include "Entity.hpp"

class RenderWindow
{
    public:
    RenderWindow(const char* title, int width, int height);
    ~RenderWindow();

    void handleEvents();
    void update();
    void render();
    void run();

    bool isRunning() {return running;}

    SDL_Texture* loadTexture(const char* filePath);
    void renderDraw(Entity& entity);

    private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool running;
};