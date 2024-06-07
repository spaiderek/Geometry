#include <iostream>
#include "Figures.h"



using namespace std;

int main()
{

    double radius = 0;
    int length = 0;
    Square square;
    Circle circle;
    int ch;

    cout << "Press 1 or 2 on which shape's area you would like to calculate\n\n"
            "1.) Area of circle\n"
            "2.) Area of square\n"
            "3.)Perimeter of circle \n"
            "4).Perimiter of square" << endl;
    cout << "\nEnter your choice: " << endl;
    cin >> ch;

    switch(ch)
    {
        case 1:
        {
            cout << "\nEnter radius of the circle: ";
            cin >> radius;
            circle.setRadius(radius);
            circle.getPerimeter();
            cout << "\nThe Area of the circle is "<< circle.getArea();
            break;
        }
        case 2:
        {
            cout << "\nPlease Enter the length of the Square's side: ";
            cin >> length;
            square.setLength(length);
            //Square.getPerimeter();
            cout << "\n The Area of the square is "<< square.getArea();
            //cout << "\n The Perimeter of the square is "<< Square.getPerimeter();
            break;
        }
        case 3:
        {
            cout << "\nEnter radius of the circle: ";
            cin >> radius;
            circle.setRadius(radius);
            cout << "\nThe Perimeter of the circle is "<< circle.getPerimeter();
            break;
        }
        case 4:
        {
            cout << "\nPlease Enter the length of the Square's side: ";
            cin >> length;
            square.setLength(length);
            cout << "\n The Perimeter of the square is "<< square.getPerimeter();
            break;
        }

        default: cout<<"\n Please enter a valid choice!";
            break;
    }

    return 0;
}