#include "Game.hpp"
#include "TextureManager.hpp"
#include "GameObject.hpp"
#include "Map.hpp"


GameObject* player;

SDL_Renderer* Game::renderer = nullptr;

SDL_Texture* text;
SDL_Rect dest;

Map* map;

Game::Game()
{}

Game::~Game()
{}

void Game::init(const char* title, int xwin, int ywin, int wwin, int hwin, bool fullscreen)
{
    int flags = 0;
    if(fullscreen){ flags = SDL_WINDOW_FULLSCREEN; }

    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        std::cout << "Subsystem Initialized!..." << std::endl;

        this->window = SDL_CreateWindow(title, xwin, ywin, wwin, hwin, flags);
        if(this->window){ std::cout << "window created" << std::endl ;}

        Game::renderer = SDL_CreateRenderer(this->window, -1, 0);
        if(Game::renderer) { std::cout << "renderer created" << std::endl; }
        SDL_SetRenderDrawColor(Game::renderer, 255, 255, 255, 0);

        this->running = true;

        player = new GameObject("images/RagozineHead.png", 0, 0);
        map = new Map();

        text = TextureManager::LoadTexture("images/pingo_front_tilesheet.png");
        dest.x = 0;
        dest.y = 0;
        dest.w = 64;
        dest.h = 64;

    } else {
        this->running = false;
    }
}

void Game::handleEvents()
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch(event.type)
    {
        case SDL_QUIT: this->running = false; break;
        case SDL_KEYDOWN:
            if(event.key.keysym.sym == SDLK_RIGHT) {  }

        default: break;
    }
}

void Game::update()
{
    player->update();
}

void Game::render()
{
    SDL_RenderClear(Game::renderer);

    map->DrawMap();
    player->render();
    TextureManager::DrawFrames(text, dest, 4, 100);

    SDL_RenderPresent(Game::renderer);
}

void Game::clean()
{
    SDL_DestroyRenderer(Game::renderer);
    SDL_DestroyWindow(this->window);
    SDL_Quit();
}

void Game::run()
{
    const int FPS = 60;
    const int FRAME_DELAY = 1000 / FPS;

    Uint32 frameStart;
    int frameTime;

    while(this->isRunning())
    {
        frameStart = SDL_GetTicks();

        this->handleEvents();
        this->update();
        this->render();

        frameTime = SDL_GetTicks() - frameStart;
        if(FRAME_DELAY > frameTime){
            SDL_Delay(FRAME_DELAY - frameTime);
        }
    }

    this->clean();
}