#pragma once

#include "Game.hpp"

enum EButtonPosition
{
    BUTTONPOS_NONE,
    BUTTONPOS_CENTERED,
    BUTTONPOS_CENTERED_WIDTH,
    BUTTONPOS_CENTERED_HEIGHT,
};

class Button
{
public:
    Button();
    Button(const char* file, const char* text, EButtonPosition buttonPosition, int x, int y, int fontSize, SDL_Color color);
    ~Button();

    void draw();
    void update();
    void modSelection();

private:
SDL_Rect dest;
TTF_Font* font;
SDL_Texture* texture;
int x, y, width, height;
int fontSize;
const char* text;
const char* file;
SDL_Color textColor;
bool isSelected {false};

};