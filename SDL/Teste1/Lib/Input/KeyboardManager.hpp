#pragma once

#include <SDL2/SDL.h>
#include <iostream>
#include <string.h>

class KeyboardManager
{
    public:
        static KeyboardManager* getInstance();
        static void clear();

        bool keyIsPressed(SDL_Scancode scanCode) const;
        bool keyIsOnePressed(SDL_Scancode scanCode) const;
        bool keyIsReleased(SDL_Scancode scanCode) const;

        void update();

    private:
        static KeyboardManager* instance;
        const Uint8* currKeyboardState;
        Uint8* prevKeyboardState;

        KeyboardManager();
        ~KeyboardManager();
};