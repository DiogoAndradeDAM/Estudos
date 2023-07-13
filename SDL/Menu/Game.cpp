#include "Game.hpp"
#include "TextureManager.hpp"

#include "Button.hpp"
#include <vector>

SDL_Renderer* Game::renderer = nullptr;

SDL_Rect src, dest;
SDL_Texture* texture = nullptr;

Button* playButton = nullptr;
Button* quitButton = nullptr;
Button* settingsButton = nullptr;
Button* continueButton = nullptr;

std::vector<Button*> menuButtons {playButton, continueButton, settingsButton, quitButton};


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

        if(TTF_Init() < 0) std::cout << "Failed to init ttf. Error: " << SDL_GetError() << std::endl;

        this->window = SDL_CreateWindow(title, xwin, ywin, wwin, hwin, flags);
        if(this->window){ std::cout << "window created" << std::endl ;}

        Game::renderer = SDL_CreateRenderer(this->window, -1, 0);
        if(Game::renderer) { std::cout << "renderer created" << std::endl; }
        SDL_SetRenderDrawColor(Game::renderer, 255, 255, 255, 0);

        this->running = true;

        SDL_Rect src = {0,0,24,24};
        SDL_Rect dest = {0,0, 24*3,24*3};

        texture = TextureManager::LoadTexture("images/pingo_front_tilesheet.png");


        menuButtons.at(0) = new Button("fonts/retro_gamming.ttf", "Play", BUTTONPOS_CENTERED_WIDTH, 0, 100, 32, SDL_Color{0, 0, 0, 0});
        menuButtons.at(1) = new Button("fonts/retro_gamming.ttf", "Continue", BUTTONPOS_CENTERED_WIDTH, 0, 164, 32, SDL_Color{0, 0, 0, 0});
        menuButtons.at(2) = new Button("fonts/retro_gamming.ttf", "Settings", BUTTONPOS_CENTERED_WIDTH, 0, 228, 32, SDL_Color{0, 0, 0, 0});
        menuButtons.at(3) = new Button("fonts/retro_gamming.ttf", "Quit", BUTTONPOS_CENTERED_WIDTH, 0, 292, 32, SDL_Color{0, 0, 0, 0});


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
            if(event.key.keysym.sym == SDLK_DOWN) { }
            break;

        default: break;
    }
}

void Game::update()
{
    for(auto button : menuButtons) button->update();
}

void Game::render()
{
    SDL_RenderClear(Game::renderer);
    for(auto button : menuButtons) button->draw();

    SDL_RenderPresent(Game::renderer);
}

void Game::clean()
{
    SDL_DestroyRenderer(Game::renderer);
    SDL_DestroyWindow(this->window);
    TTF_Quit();
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