#include <SDL2\SDL.h>
#include <SDL2\SDL_image.h>

#include "RenderWindow.hpp"

const int WINDOW_WIDTH = 800, WINDOW_HEIGHT = 600;
RenderWindow* game = nullptr;

int main(int argc, char** argv)
{
    game = new RenderWindow("SDL WORKS!", WINDOW_WIDTH, WINDOW_HEIGHT);

    game->run();

    delete game;

    return 0;
}