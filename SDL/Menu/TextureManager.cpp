#include "TextureManager.hpp"

SDL_Texture* TextureManager::LoadTexture(const char* fileName)
{
    SDL_Surface* tmpSurface = IMG_Load(fileName);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(Game::renderer, tmpSurface);
    SDL_FreeSurface(tmpSurface);

    return texture;
}

SDL_Texture* TextureManager::LoadText(const char* file, const char* text, int fontSize, SDL_Color color)
{
    TTF_Font* font = TTF_OpenFont(file, fontSize);
    SDL_Surface* tmpSurface = TTF_RenderText_Solid(font, text, color);
    SDL_Texture* texture = SDL_CreateTextureFromSurface(Game::renderer, tmpSurface);
    SDL_FreeSurface(tmpSurface);
    
    return texture;
}

void TextureManager::Draw(SDL_Texture* texture, SDL_Rect src, SDL_Rect dest)
{
    SDL_RenderCopy(Game::renderer, texture, &src, &dest);
}

void TextureManager::Draw(SDL_Texture* texture, SDL_Rect dest)
{
    SDL_RenderCopy(Game::renderer, texture, NULL, &dest);
}

void TextureManager::DrawFrames(SDL_Texture* texture, SDL_Rect dest, int frames, int speed)
{
    int sprite = (int)((SDL_GetTicks() / speed) % frames);
    SDL_Rect src{sprite*24, 0, 24, 24};
    SDL_RenderCopy(Game::renderer, texture, &src, &dest);
}