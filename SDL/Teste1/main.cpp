#include <iostream>
#include <SDL2/SDL.h>

#include "WindowManager.hpp"

int main(int argc, char** argv)
{
    WindowManager* game = new WindowManager("My Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600);

    game->gameLoop();

    delete game;

    return EXIT_SUCCESS;
}