#include "Figures.h"

using namespace std;

Circle::Circle(double r)
{
    radius = r;
}
double Circle::getRadius()const
{
    return radius;
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
int Square::getLength()const
{
    return length;
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