#include "Button.hpp"
#include "TextureManager.hpp"

Button::Button()
{
    this->texture = nullptr;
    this->text = "none";
    this->x = this->y = this->height = this->width = 0;
    this->font = nullptr;
}

Button::Button(const char* file, const char* text, EButtonPosition buttonPosition, int x, int y, int fontSize, SDL_Color color)
: file(file), x(x), y(y), text(text), fontSize(fontSize), textColor(color)
{
    this->texture = TextureManager::LoadText(file, this->text, this->fontSize, this->textColor);

    SDL_QueryTexture(this->texture, NULL, NULL, &this->width, &this->height);

    this->dest.w = this->width;
    this->dest.h = this->height;

    switch(buttonPosition)
    {
        case BUTTONPOS_CENTERED:
            this->dest.x = 400 - (this->width/2);
            this->dest.y = 300 - (this->height/2);
            this->x = this->dest.x;
            this->y = this->dest.y;
            break;
        case BUTTONPOS_CENTERED_WIDTH:
            this->dest.x = 400 - (this->width/2);
            this->dest.y = this->y;
            this->x = this->dest.x;
            break;
        case BUTTONPOS_CENTERED_HEIGHT:
            this->dest.x = this->x;
            this->dest.y = 300 - (this->height/2);
            this->y = this->dest.y;
            break;

        default:    
            this->dest.x = this->x;
            this->dest.y = this->y;
            break;
    }
    

}

void Button::modSelection()
{
    this->isSelected = ((!this->isSelected) ? true : false );
}

Button::~Button()
{
    SDL_DestroyTexture(this->texture);
}

void Button::draw()
{
    TextureManager::Draw(this->texture, this->dest);
}

void Button::update()
{
    if(this->isSelected){
        this->texture = TextureManager::LoadText(this->file, this->text, this->fontSize, SDL_Color{255,0,0,0});
    }else{
        this->texture = TextureManager::LoadText(this->file, this->text, this->fontSize, this->textColor);
    }
}