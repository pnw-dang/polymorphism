#pragma once

class Circle {
public:
	Circle(double radius);
	double virtual area() const {
		double radius = _radius;
		double area = radius * 3.14;
		return area;
	}
private:
	double _radius;
};

