#pragma once

#include "Game.hpp"

class TextureManager
{
    public:
    static SDL_Texture* LoadTexture(const char* fileName);
    static SDL_Texture* LoadText(const char* file, const char* text, int fontSize, SDL_Color color);
    static void Draw(SDL_Texture* texture, SDL_Rect src, SDL_Rect dest);
    static void Draw(SDL_Texture* texture, SDL_Rect dest);
    static void DrawFrames(SDL_Texture* texture, SDL_Rect dest, int frames, int speed);
};