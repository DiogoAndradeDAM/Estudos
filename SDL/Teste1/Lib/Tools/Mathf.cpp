#include "Lib/Tools/Mathf.hpp"

float Mathf::Clamp(float value, float min, float max)
{
    if(value < min) return min;

    else if(value > max) return max;

    return value;
}