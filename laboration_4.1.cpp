#include "Shape.h"
#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Trapezoid.h"
#include "Triangle.h"
using namespace std;

int main() {
    double l1; 
    cout << "Input l1: "; cin >> l1;
    double l2;
    cout << "Input l2: "; cin >> l2;
    double l3;
    cout << "Input l3: "; cin >> l3;
    double l4;
    cout << "Input l4: "; cin >> l4;
    Rectangle rectangle(l1, l2);
    Circle circle(l3);
    RightTriangle triangle(l1, l2, l3);
    Trapezoid trapezoid(l1, l2, l3, l4);

    Shape* shapes[] = { &rectangle, &circle, &triangle, &trapezoid };

    for (const auto& shape : shapes) {
        cout << "Perimeter of the shape is: " << shape->perimeter() << endl;
        cout << "Type of the shape is: " << typeid(*shape).name() << endl;
    }

    return 0;
}