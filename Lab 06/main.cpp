#include <iostream>
#include "point2d.h"
#include "rectangletype.h"
#include "point2d.cpp"
#include "rectangletype.cpp"

using namespace std;



int main() {

	int ax0;

	int ay0;

	int ax1;

	int ay1;


	cout << "Rectangle App!" << endl;
	cout << "--------------" << endl;

	cout << "Please enter an input for x0: ";
	cin >> ax0;
	cout << "Please enter an input for y0: ";
	cin >> ay0;
	cout << "Please enter an input for x1: ";
	cin >> ax1;
	cout << "Please enter an input for y1: ";
	cin >> ay1;

	rectangleType abs(ax0, ay0, ax1, ay1);
	cout << "Width: ";
	cout << abs.getWidth() << endl;
	cout << "Length: ";
	cout << abs.getLength() << endl;
	cout << "Perimeter: ";
	cout << abs.getPerimeter() << endl;
	cout << "Area: ";
	cout << abs.getArea() << endl;

	exit(0);





}
