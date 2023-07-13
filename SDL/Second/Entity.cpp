#include "Entity.hpp"

Entity::Entity(float xpos, float ypos, SDL_Texture* filePath)
:x(xpos), y(ypos), texture(filePath)
{
    currentFrame.x = 0;
    currentFrame.y = 0;
    currentFrame.w = 32;
    currentFrame.h = 32;
}