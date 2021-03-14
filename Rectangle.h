#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle(double width, double height);
private:
	double _width;
	double _height;
};

