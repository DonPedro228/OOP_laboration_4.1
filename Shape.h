#pragma once
#include <iostream>

class Shape abstract {
public:
    virtual double perimeter() const = 0; 
    virtual ~Shape() {}
};