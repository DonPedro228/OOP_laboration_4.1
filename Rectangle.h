#pragma once
#include "Shape.h"


class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void getL(double l) {}
    virtual double perimeter() const override {
        return 2 * (length + width);
    }
};