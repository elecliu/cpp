/*
 * GeometricObject.cpp
 *
 *  Created on: Oct 16, 2018
 *      Author: kadingche
 */
#include <string>
#include "GeometricObject.h"
using namespace std;

namespace std {

GeometricObject::GeometricObject() {
	// TODO Auto-generated constructor stub
	color = "white";
}

GeometricObject::GeometricObject(string color)
{
	this->color = color;
}

GeometricObject::~GeometricObject() {
	// TODO Auto-generated destructor stub
}

void GeometricObject::setColor(string color)
{
	this->color = color;
}

string GeometricObject::getColor()
{
	return color;
}

} /* namespace std */
