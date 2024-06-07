#ifndef GEOMETRY_FIGURES_H
#define GEOMETRY_FIGURES_H


using namespace std;

class Square
{
private:
    int length, area;

public:
    Square(int length = 0);

    void setLength(int length);
    int getArea()const;
    int getPerimeter()const;
};

class Circle
{
private:
    double radius, area;

public:
    Circle(double radius = 0);

    void setRadius(double radius);
    double getArea()const;
    double getPerimeter()const;
};
class Rectangle
{
private:
    int lengthLonger,lengthShorter, area;

public:
    Rectangle(int lengthLonger = 0, int lengthShorter=0);

    void setLength(int lengthLonger, int lengthShorter);
    int getArea()const;
    int getPerimeter()const;
};

#endif //GEOMETRY_FIGURES_H