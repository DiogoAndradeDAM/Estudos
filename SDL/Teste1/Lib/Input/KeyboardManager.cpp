#include "KeyboardManager.hpp"

KeyboardManager* KeyboardManager::instance = NULL;

KeyboardManager* KeyboardManager::getInstance()
{
    if(KeyboardManager::instance == NULL){
        instance = new KeyboardManager();
    }

    return KeyboardManager::instance;
}

void KeyboardManager::clear()
{
    delete instance;
    instance = NULL;
}

KeyboardManager::KeyboardManager()
{
    this->currKeyboardState = SDL_GetKeyboardState(nullptr);
    this->prevKeyboardState = new Uint8[SDL_NUM_SCANCODES];
    memcpy(this->prevKeyboardState, this->currKeyboardState, SDL_NUM_SCANCODES);
}

KeyboardManager::~KeyboardManager()
{
    
}

void KeyboardManager::update()
{
    memcpy(this->prevKeyboardState, this->currKeyboardState, SDL_NUM_SCANCODES);
    SDL_PumpEvents();
    this->currKeyboardState = SDL_GetKeyboardState(nullptr);

    //std::cout << "Current: " << (int)this->currKeyboardState[SDL_SCANCODE_X] << " | Previous: " << (int)this->prevKeyboardState[SDL_SCANCODE_X] << std::endl;

}

bool KeyboardManager::keyIsPressed(SDL_Scancode scanCode) const
{
    return this->currKeyboardState[scanCode];
}

bool KeyboardManager::keyIsOnePressed(SDL_Scancode scanCode) const
{
    return (this->currKeyboardState[scanCode] == 1 && this->prevKeyboardState[scanCode] != 1);
}

bool KeyboardManager::keyIsReleased(SDL_Scancode scanCode) const
{
    return (this->currKeyboardState[scanCode]) != 1 && this->prevKeyboardState[scanCode] == 1;
}