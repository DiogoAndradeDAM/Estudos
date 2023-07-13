#ifndef Game_hpp
#define Game_hpp

#include <SDL2\SDL.h>
#include <SDL2\SDL_image.h>
#include <iostream>

class Game
{
    public:
    Game();
    ~Game();

    void init(const char* title, int xwin, int ywin, int wwin, int hwin, bool fullscreen);

    void handleEvents();
    void update();
    void render();
    void clean();
    void run();

    bool isRunning() {return this->running;}

    static SDL_Renderer* renderer;

    private:
    bool running;
    SDL_Window* window;

};

#endif