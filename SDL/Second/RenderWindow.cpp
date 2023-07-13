#include "RenderWindow.hpp"


RenderWindow::RenderWindow(const char* title, int width, int height)
: window(nullptr), renderer(nullptr)
{
    this->window = SDL_CreateWindow(
        title,
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        width, height,
        SDL_WINDOW_SHOWN  
    );
    if(this->window == NULL) std::cout << "Window failed to init. Error: " << SDL_GetError() << std::endl;

    this->renderer = SDL_CreateRenderer(this->window, -1, SDL_RENDERER_ACCELERATED);
    if(this->renderer == NULL) std::cout << "Renderer failed to init. Error: " << SDL_GetError() << std::endl;


    this->running = true;
}

RenderWindow::~RenderWindow()
{
    SDL_DestroyWindow(this->window);
    SDL_DestroyRenderer(this->renderer);
    SDL_Quit();
}

SDL_Texture* RenderWindow::loadTexture(const char* filePath)
{
    SDL_Texture* texture = nullptr;
    texture = IMG_LoadTexture(this->renderer, filePath);
    if(texture == NULL) std::cout << "Failed to laod texture. Error: " << SDL_GetError() << std::endl;
    
    return texture;
}

void RenderWindow::renderDraw(Entity& entity)
{
    SDL_Rect srcRect{entity.getCurrentFrame().x, entity.getCurrentFrame().y, 
    entity.getCurrentFrame().w, entity.getCurrentFrame().h};

    SDL_Rect destRect{(int)entity.getX(), (int)entity.getY(), 
    entity.getCurrentFrame().w*4, entity.getCurrentFrame().h*4};

    SDL_RenderCopy(this->renderer, entity.getTexture(), &srcRect, &destRect);
}

void RenderWindow::handleEvents()
{
    SDL_Event event;
    while(SDL_PollEvent(&event))
    {
        switch(event.type)
        {
            case SDL_QUIT: running = false; break;
            case SDL_KEYDOWN:
                if(event.key.keysym.sym == SDLK_ESCAPE) {running = false;}
                break;
            default: break;
        }
    }
}

void RenderWindow::update()
{

}

void RenderWindow::render()
{
    SDL_SetRenderDrawColor(this->renderer, 255, 255, 255, 0);
    SDL_RenderClear(this->renderer);

    Entity platform0(100, 100, this->loadTexture("images/ragozineHead.png"));
    this->renderDraw(platform0);

    SDL_RenderPresent(this->renderer);
}

void RenderWindow::run()
{
    while(this->isRunning())
    {
        this->handleEvents();
        this->update();
        this->render();
    }
}