#pragma once
#include "Shape.h"
using namespace std;

class RightTriangle : public Shape {
private:
    double side1;
    double side2;
    double hypotenuse;
public:
    RightTriangle(double s1, double s2, double hyp) : side1(s1), side2(s2), hypotenuse(hyp) {}
    virtual double perimeter() const override {
        return side1 + side2 + hypotenuse;
    }
};

