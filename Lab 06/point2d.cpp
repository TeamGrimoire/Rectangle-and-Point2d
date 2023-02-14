#include "point2d.h"
#include "rectangletype.cpp"


point2D::point2D(int ax, int ay) {
    x = ax;
    y = ay;
}
int point2D::getX(){ 
    return x; 
}
int point2D::getY(){
    return y; 
}