#include "point2d.h"
#include "rectangletype.cpp"

void point2D::setX(int ax) {
    x = ax;
}
void point2D::setX(int ay) {
    y = ay;
}

int point2D::getX() { 
    return x; 
}
int point2D::getY() { 
    return y; 
}
point2D::point2D(int ax, int ay) {
    x = ax;
    y = ay;
}
