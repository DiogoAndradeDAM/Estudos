#pragma once

#include <SDL2\SDL.h>
#include <SDL2\SDL_image.h>

class Entity
{
    public:
    Entity(float xpos, float ypos, SDL_Texture* filePath);

    float getX() {return this->x;}
    float getY() {return this->y;}
    SDL_Texture* getTexture() {return this->texture;}
    SDL_Rect getCurrentFrame() {return this->currentFrame;}

    private:
    float x, y;
    SDL_Rect currentFrame;
    SDL_Texture* texture;
};