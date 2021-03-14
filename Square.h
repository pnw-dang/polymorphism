#pragma once
#include "Shape.h"

class Square : public Shape {
public:
	Square(double side);
	double virtual area() const override {
		double side = _side;
		double area = side * side;
		return area;
	}
private:
	double _side;
};

