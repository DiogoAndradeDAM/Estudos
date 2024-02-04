#include "Lib/Tools/Vector2.hpp"

Vector2::Vector2(float x, float y)
: x(x), y(y)
{

}

void Vector2::clamp(const Vector2& min, const Vector2& max)
{
    this->x = Mathf::Clamp(this->x, min.x, max.x);
    this->y = Mathf::Clamp(this->y, min.y, max.y);
}

Vector2 Vector2::operator+(const Vector2& other)
{
    return Vector2(this->x + other.x, this->y + other.y);
}

Vector2 Vector2::operator-(const Vector2& other)
{
    return Vector2(this->x - other.x, this->y - other.y);
}

Vector2 Vector2::operator*(const Vector2& other)
{
    return Vector2(this->x * other.x, this->y * other.y);
}

Vector2 Vector2::operator/(const Vector2& other)
{
    return Vector2(this->x / other.x, this->y / other.y);
}

Vector2 Vector2::operator=(const Vector2& other)
{
    return Vector2(other.x, other.y);
}

bool Vector2::operator==(const Vector2& other)
{
    return (this->x == other.x) && (this->y == other.y);
}

bool Vector2::operator<(const Vector2& other)
{
    return (this->x < other.x) && (this->y < other.y);
}

bool Vector2::operator<=(const Vector2& other)
{
    return (this->x <= other.x) && (this->y <= other.y);
}
