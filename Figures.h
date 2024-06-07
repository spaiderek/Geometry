#ifndef GEOMETRY_FIGURES_H
#define GEOMETRY_FIGURES_H


using namespace std;

class Square
{
private:
    int length, area;

public:
    Square(int length = 0);
    int getLength()const;
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

    double getRadius()const;
    void setRadius(double radius);
    double getArea()const;
    double getPerimeter()const;
};

#endif //GEOMETRY_FIGURES_H