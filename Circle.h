#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
	Circle(double radius);
	double virtual area() const override {
		double radius = _radius;
		double area = radius * 3.14;
		return area;
	}
private:
	double _radius;
};

