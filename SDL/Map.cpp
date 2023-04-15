#include "Map.hpp"
#include "TextureManager.hpp"

int lvl1[20][25] = {
    {0,0,0,0,0,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,2,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,2,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
};

Map::Map()
{
    this->dirt = TextureManager::LoadTexture("images/dirt.png");
    this->grass = TextureManager::LoadTexture("images/grass.png");
    this->water = TextureManager::LoadTexture("images/water.png");

    this->LoadMap(lvl1);

    this->src.x = src.y = 0;
    this->src.w = dest.w = 32;
    this->src.h = dest.h = 32;
}

Map::~Map()
{}

void Map::LoadMap(int arr[20][25])
{
    for(int row=0; row<20; row++){
        for(int column=0; column<25; column++){
            map[row][column] = arr[row][column];
        }
    }
}

void Map::DrawMap()
{
    int type = 0;
    for(int row=0; row<20; row++){
        for(int column=0; column<25; column++){
            type = map[row][column];

            this->dest.x = column * 32;
            this->dest.y = row * 32;

            switch(type)
            {
                case 0: TextureManager::Draw(this->water, this->src, this->dest); break;
                case 1: TextureManager::Draw(this->grass, this->src, this->dest); break;
                case 2: TextureManager::Draw(this->dirt, this->src, this->dest); break;
                default: break;
            }
        }
    }
}