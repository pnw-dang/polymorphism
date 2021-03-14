#pragma once

class Rectangle{
public:
	Rectangle(double width, double height);
	double virtual area() const {
		double width = _width;
		double height = _height;
		double area = width * height;
		return area;
	}
private:
	double _width;
	double _height;
};

