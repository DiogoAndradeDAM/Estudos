#pragma once

#include "Game.hpp"

class GameObject
{
    public:
    GameObject(const char* textureSheet, int xpos, int ypos);
    ~GameObject();

    void update();
    void render();

    private:

    int xpos, ypos;

    SDL_Texture* objTexture;
    SDL_Rect srcRect, destRect;
};