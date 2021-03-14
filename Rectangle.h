#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle(double width, double height);
	double virtual area() const override {
		double width = _width;
		double height = _height;
		double area = width * height;
		return area;
	}
private:
	double _width;
	double _height;
};

