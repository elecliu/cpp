/*
 * GeometricObject.h
 *
 *  Created on: Oct 16, 2018
 *      Author: kadingche
 */

#ifndef GEOMETRICOBJECT_H_
#define GEOMETRICOBJECT_H_
#include <string>

namespace std {

class GeometricObject {
public:
	GeometricObject();
	GeometricObject(string);
	virtual ~GeometricObject();
	void setColor(string color);
	string getColor();


private:
	string color;


};

} /* namespace std */

#endif /* GEOMETRICOBJECT_H_ */
