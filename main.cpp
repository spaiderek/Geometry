#include <iostream>
#include "Figures.h"



using namespace std;

void menu(void){
    cout << "\n\nWhich shape's area you would like to calculate?\n\n"
            "1. circle\n"
            "2. square\n"
            "3. rectangle\n"
            "0. EXIT\n" << endl;
    cout << "\nEnter your choice: " << endl;
}
void miniMenu(void){
    cout << "\nWould you like to calculate\n\n"
            "1. Area\n"
            "2. Perimeter\n"
            "3. Both\n" << endl;
}

int main()
{
    Square square;
    Circle circle;
    Rectangle rectangle;
    int ch = 0;
do {
    menu();
    cin >> ch;

    switch (ch) {
        case 0: {
            break;
        }
        case 1: {
            double radius = 0;
            int cir;
            cout << "\nEnter radius of the circle: ";
            cin >> radius;
            circle.setRadius(radius);
            miniMenu();
            cin >> cir;
            switch (cir) {
                case 1: {
                    cout << "\nThe Area of the circle is " << circle.getArea();
                    break;
                }
                case 2: {
                    cout << "\nThe Perimeter of the circle is " << circle.getPerimeter();
                    break;
                }
                case 3: {
                    cout << "\nThe Area of the circle is " << circle.getArea();
                    cout << "\n\nThe Perimeter of the circle is " << circle.getPerimeter();
                    break;
                }
                default:
                    cout << "\nPlease enter a valid choice!" << endl;
            }

            break;
        }
        case 2: {
            int length = 0;
            int sq;
            cout << "\nPlease Enter the length of the Square's side: ";
            cin >> length;
            square.setLength(length);
            miniMenu();
            cin >> sq;
            switch (sq) {
                case 1: {
                    cout << "\nThe Area of the square is " << square.getArea();
                    break;
                }
                case 2: {
                    cout << "\nThe Perimeter of the square is " << square.getPerimeter();
                    break;
                }
                case 3: {
                    cout << "\nThe Area of the square is " << square.getArea();
                    cout << "\n\nThe Perimeter of the square is " << square.getPerimeter();
                    break;
                }
                default:
                    cout << "\nPlease enter a valid choice!" << endl;
            }
            break;
        }
        case 3:
        {
            int lengthLonger = 0;
            int lengthShorter = 0;
            int re;
            cout << "\nPlease Enter the longer length of the rectangle side: ";
            cin >> lengthLonger;
            cout << "\nPlease Enter the shorter length of the rectangle side: ";
            cin >> lengthShorter;
            rectangle.setLength(lengthLonger, lengthShorter);
            miniMenu();
            cin >> re;
            switch (re) {
                case 1: {
                    cout << "\nThe Area of the rectangle is " << rectangle.getArea();
                    break;
                }
                case 2: {
                    cout << "\nThe Perimeter of the rectangle is " << rectangle.getPerimeter();
                    break;
                }
                case 3: {
                    cout << "\nThe Area of the rectangle is " << rectangle.getArea();
                    cout << "\n\nThe Perimeter of the rectangle is " << rectangle.getPerimeter();
                    break;
                }
                default:
                    cout << "\nPlease enter a valid choice!" << endl;
            }
            break;
        }
        default:
            cout << "\nPlease enter a valid choice!";
    }
}while(ch!=0);

cout << "\nTHE END" << endl;

    return 0;
}