#include "Game.hpp"

Game* game = nullptr;

int main(int argc, char** argv)
{
    game = new Game();
    game->init("Teste SDL in Tutorial",
    SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
    800, 600,
    0
    );

    game->run();

    return 0;
}