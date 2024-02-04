#include "WindowManager.hpp"

SDL_Window* WindowManager::Window = NULL;
SDL_Renderer* WindowManager::Renderer = NULL;

WindowManager::WindowManager(const char* window_title, int window_posx, int window_posy, int window_width, int window_height)
{
    WindowManager::Window = SDL_CreateWindow(window_title, window_posx, window_posy, window_width, window_height, SDL_WINDOW_SHOWN);
    if(WindowManager::Window == nullptr){
        std::cout << "ERROR! Window was not created. The value is or equal NULL: " << SDL_GetError() << std::endl;
    }

    WindowManager::Renderer = SDL_CreateRenderer(WindowManager::Window, -1, SDL_RENDERER_ACCELERATED);
    if(WindowManager::Renderer == nullptr){
        std::cout << "ERROR! Renderer was not created. The value is or equal NULL: " << SDL_GetError() << std::endl;
    }

    this->running = true;
}

WindowManager::~WindowManager()
{
    this->keyboardManager->clear();
    SDL_DestroyRenderer(WindowManager::Renderer);
    SDL_DestroyWindow(WindowManager::Window);
    SDL_Quit();
}

void WindowManager::start()
{
    this->keyboardManager = KeyboardManager::getInstance();
    this->pos = Vector2(100,100);
}

void WindowManager::handleInput()
{
    this->keyboardManager->update();
    // if(mKeyboardManager->keyIsPressed(SDL_SCANCODE_SPACE)){
    //     std::cout << "Space is pressed" << std::endl;
    // }
    if(this->keyboardManager->keyIsOnePressed(SDL_SCANCODE_X)){
        std::cout << "X is pressed" << std::endl;
    }

    SDL_Event event;
    while(SDL_PollEvent(&event)){
        switch(event.type)
        {
            case SDL_QUIT:
                this->running = false;
            break;
        }
    }
}

void WindowManager::update()
{
    if(this->keyboardManager->keyIsPressed(SDL_SCANCODE_D)){
        this->pos = this->pos + Vector2(10,0);   
    }
    if(this->keyboardManager->keyIsPressed(SDL_SCANCODE_A)){
        this->pos = this->pos - Vector2(10,0);   
    }
}

void WindowManager::draw()
{
    SDL_RenderClear(WindowManager::Renderer);


    SDL_RenderPresent(WindowManager::Renderer);
}

void WindowManager::gameLoop()
{
    start();
    int frameStart = 0;
    while(isRunning()){
        frameStart = SDL_GetTicks();
        handleInput();
        update();
        draw();
        waitEndOfFrame(frameStart);
    }
}

void WindowManager::waitEndOfFrame(int frameStart)
{
    int frameTime = SDL_GetTicks() - frameStart;
    if(1000/FPS > frameTime){
        SDL_Delay(1000/FPS - frameTime);
    }
}