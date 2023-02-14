#include "point2d.h"
#include "rectangletype.h"
#define abs

rectangleType::rectangleType(int ax0, int ay0, int ax1, int ay1) {

	p0 =new point2D(ax0, ay0);
	p1 = new point2D(ax1, ay1);


}