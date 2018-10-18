/*
 * TestGeometricObject.cpp
 *
 *  Created on: Oct 16, 2018
 *      Author: kadingche
 */
#include "GeometricObject.h"
#include "DerivedCircle.h"
#include <iostream>
using namespace std;


int main()
{
	GeometricObject shape;
	GeometricObject shape1("white");
	shape.setColor("red");
	shape1.setColor("red");
	cout << shape.getColor() << endl;
	cout << shape1.getColor() << endl;
	DerivedCircle circle1;
	cout << circle1.getArea();
	cout << circle1.getColor();
	cin.get();
	return 0;
}




