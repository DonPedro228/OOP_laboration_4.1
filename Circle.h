#pragma once
#include "Shape.h"
using namespace std;


class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    virtual double perimeter() const override {
        return 2 * 3.14 * radius;
    }
};

