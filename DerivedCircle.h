/*
 * DerivedCircle.h
 *
 *  Created on: Oct 16, 2018
 *      Author: kadingche
 */

#ifndef DERIVEDCIRCLE_H_
#define DERIVEDCIRCLE_H_

#include "GeometricObject.h"

namespace std {

class DerivedCircle: public GeometricObject {
public:
	DerivedCircle();
	virtual ~DerivedCircle();
	double getArea();
private:
	double radius;
};

} /* namespace std */

#endif /* DERIVEDCIRCLE_H_ */
