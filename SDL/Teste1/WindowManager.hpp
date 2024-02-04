#pragma once

#include <iostream>
#include <SDL2/SDL.h>

#include "Lib/Input/KeyboardManager.hpp"
#include "Lib/Tools/Vector2.hpp"
#include "Lib/Tools/Mathf.hpp"

class WindowManager
{
    public:
        static SDL_Window* Window;
        static SDL_Renderer* Renderer;

        WindowManager(const char* window_title, int window_posx, int window_posy, int window_width, int window_height);
        ~WindowManager();

        void gameLoop();
        bool isRunning(){return this->running;}

        Vector2 pos = Vector2(0,0);

    private:
        bool running = false;
        const int FPS = 60;
        KeyboardManager* keyboardManager;

        void start();
        void update();
        void handleInput();
        void draw();
        void waitEndOfFrame(int startTick);

};