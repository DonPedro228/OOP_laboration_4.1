#pragma once
#include "Shape.h"
using namespace std;

class Trapezoid : public Shape {
private:
    double side1;
    double side2;
    double side3;
    double side4;
public:
    Trapezoid(double s1, double s2, double s3, double s4) : side1(s1), side2(s2), side3(s3), side4(s4) {}
    double perimeter() const override {
        return side1 + side2 + side3 + side4;
    }
};