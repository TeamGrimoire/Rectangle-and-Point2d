#include "point2d.h"
#include "rectangletype.h"
#include <cmath>
#define abs

rectangleType::rectangleType(int ax0, int ay0, int ax1, int ay1) {

	p0 = point2D(ax0, ay0);
	p1 = point2D(ax1, ay1);

}

int rectangleType::getX0() {

	return p0.getX();

}


int rectangleType::getY0() {

	return p0.getY();

}

int rectangleType::getX1() {
	return p1.getX();
}

int rectangleType::getY1() {
	return p1.getY();
}

