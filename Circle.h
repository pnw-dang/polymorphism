#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
	Circle(double radius);
private:
	double _radius;
};

