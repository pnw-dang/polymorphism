#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Shape.h"

void printArea(const Shape& shape) {
	std::cout << shape.area() << "\n";
}

int main()
{
	Rectangle r1{ 3.0, 5.0 };
	Square s1{ 4.0 };
	Circle c1{ 10.0 };

	printArea(r1);
	printArea(s1);
	printArea(c1);
}

