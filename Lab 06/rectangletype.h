#pragma once
#include "point2d.h"

class rectangleType {
private:
    point2D p0;
    point2D p1;

public:
    int getX0() {
        return p0.getX();
    }
    int getY0() {
        return p0.getY();
    }
    int getX1() {
        return p1.getX();
    }
    int getY1() {
        return p1.getY();
    }
    int getWidth() {
        return (getX1() - getX0());
    }
    int getLength() {
        return (getY1() - getY0());
    }
    int getPerimeter() {
        return 2 * (getWidth() + getLength());
    }
    int getArea() {
        return (getWidth() * getLength());
    }
    rectangleType(int ax0, int ay0, int ax1, int ay1) {
        point2D p0(ax0, ay0);
        point2D p1(ax1, ay1);
    }
};