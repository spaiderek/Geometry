#include "Figures.h"

using namespace std;

Circle::Circle(double r)
{
    radius = r;
}
void Circle::setRadius (double r)
{
    radius = r;
}
double Circle::getArea() const
{
    return radius * radius * 3.1415926;
}
double Circle::getPerimeter() const
{
    return 2 * radius * 3.1415926;
}



Square::Square(int len)
{
    length = len;
}
void Square::setLength(int len)
{
    length = len;
}
int Square::getArea() const
{
    return length * length;
}
int Square::getPerimeter() const
{
    return 4 * length ;
}


Rectangle::Rectangle(int lenL, int lenS)
{
    lengthLonger = lenL;
    lengthShorter = lenS;
}
void Rectangle::setLength(int lenL, int lenS)
{
    lengthLonger = lenL;
    lengthShorter = lenS;
}
int Rectangle::getArea() const
{
    return lengthLonger * lengthShorter;
}
int Rectangle::getPerimeter() const
{
    return (2 * lengthShorter) + (2 * lengthLonger);
}