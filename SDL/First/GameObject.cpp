#include "GameObject.hpp"
#include "TextureManager.hpp"

GameObject::GameObject(const char* textureSheet, int xpos, int ypos)
: xpos(xpos), ypos(ypos)
{
    this->objTexture = TextureManager::LoadTexture(textureSheet);
}

GameObject::~GameObject()
{}

void GameObject::update()
{
    this->xpos++;
    this->ypos++;

    this->srcRect.h = 32;
    this->srcRect.w = 32;
    this->srcRect.x = 0;
    this->srcRect.y = 0;

    this->destRect.x = xpos;
    this->destRect.y = ypos;
    this->destRect.w = srcRect.w * 2;
    this->destRect.h = srcRect.h * 2;
}

void GameObject::render()
{
    SDL_RenderCopy(
        Game::renderer,
        this->objTexture,
        &this->srcRect/*quadrado dentro da imagem*/,
        &this->destRect/*quadrado dentro da janela*/
    );
}

