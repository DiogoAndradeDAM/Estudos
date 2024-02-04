#pragma once

#include <iostream>
#include "Lib/Tools/Mathf.hpp"


class Vector2
{
    public: 
        float x,y;

        Vector2(float x, float y);

        void clamp(const Vector2& min, const Vector2& max);

        Vector2 operator + (const Vector2& other);
        Vector2 operator - (const Vector2& other);
        Vector2 operator * (const Vector2& other);
        Vector2 operator / (const Vector2& other);

        Vector2 operator = (const Vector2& other);
        bool operator == (const Vector2& other);
        bool operator < (const Vector2& other);
        bool operator <= (const Vector2& other);

    private:

};