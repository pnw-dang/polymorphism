#pragma once

class Square {
public:
	Square(double side);
	double virtual area() const {
		double side = _side;
		double area = side * side;
		return area;
	}
private:
	double _side;
};

