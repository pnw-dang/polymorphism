#pragma once
#include "Shape.h"

class Square : public Shape {
public:
	Square(double side);
private:
	double _side;
};

