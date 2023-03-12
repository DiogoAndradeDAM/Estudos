#include <iostream>

class Shape
{
    public:
    int x, y;
    int width, height;

    int getArea();

    Shape(int x, int y, int w, int h);
    Shape();
};

int Shape::getArea()
{
    return this->width * this->height;
}

Shape::Shape(int x, int y, int w, int h)
{
    this->x = x;
    this->y = y;
    this->width = w;
    this->height = h;
}

Shape::Shape()
{
    this->x = 0;
    this->y = 0;
    this->width = 0;
    this->height = 0;
}

class Square : public Shape
{
    public:

    int size;

    int getArea();
    Square(int x, int y, int size);
    Square();
};

int Square::getArea()
{
    return size*2;
}

Square::Shape()
{
    this->x = 0;
    this->y = 0;
    this->size = 0;
}

Square::Shape(int x, int y, int size)
{
    this->x = x;
    this->y = y;
    this->size = size;
}

int main(void)
{
    Square *square = new Square(10, 10, 20);

    std::cout << square->getArea();

    return 0;
}