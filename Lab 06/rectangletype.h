#pragma once
#include "point2d.h"
#include "point2d.cpp"

class rectangleType {

private:
    point2D p0;
    point2D p1;

public:
    int getX0();
    int getY0();
    int getX1();
    int getY1();
    int getWidth();
    int getLength();
    int getPerimeter();
    int getArea();
    rectangleType(int ax0, int ay0, int ax1, int ay1);
};