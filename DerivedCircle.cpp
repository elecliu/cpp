/*
 * DerivedCircle.cpp
 *
 *  Created on: Oct 16, 2018
 *      Author: kadingche
 */

#include "DerivedCircle.h"

namespace std {

DerivedCircle::DerivedCircle() {
	radius = 1;
	// TODO Auto-generated constructor stub

}

DerivedCircle::~DerivedCircle() {
	// TODO Auto-generated destructor stub
}

double DerivedCircle::getArea()
{
	return 3.14 * radius * radius;
}


} /* namespace std */
