#include <iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"

template<typename T> void printArea(const T& shape) {
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

/** 
Q1. Which one of these do you think is easier to implement and use, dynamic or static polymorphism?
A. I feel like I'm more used to doing dynamic polymorphism since that's what I was taught in other classes,
but static polymorphism is definitely more easier to use! You don't need to override anything,
or have the classes inherit from the base class. 
**/

/** 
Q2. Modern C++ development highly encourages static polymorphism over dynamic polymorphism, why do you think that is? 
A. I think the reason has to do with efficiency. With static polymorphism, you can get rid of any redundancy without
giving up the ability to work with different data types. 
**/