#include "TextureManager.hpp"

SDL_Texture* TextureManager::LoadTexture(const char* fileName)
{
    SDL_Surface* tmpSurface = IMG_Load(fileName);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(Game::renderer, tmpSurface);
    SDL_FreeSurface(tmpSurface);

    return texture;
}

void TextureManager::Draw(SDL_Texture* texture, SDL_Rect src, SDL_Rect dest)
{
    SDL_RenderCopy(Game::renderer, texture, &src, &dest);
}

void TextureManager::DrawFrames(SDL_Texture* texture, SDL_Rect dest, int frames, int speed)
{
    int sprite = (int)((SDL_GetTicks() / speed) % frames);
    SDL_Rect src{sprite*24, 0, 24, 24};
    SDL_RenderCopyEx(Game::renderer, texture, &src, &dest, 0.f, NULL, SDL_FLIP_VERTICAL);
}