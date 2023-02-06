/*
 * Math.cpp
 *
 *  Created on: Jan 3, 2023
 *      Author: Nathan
 */
#include "Geometry.h"

namespace priori{

	Point::Point() : x(0), y(0) {};

	Point::Point(double x, double y) : x(x), y(y) {};

	Point Point::operator+(const Point &other){
		return Point(x+other.x, y+other.y);
	}

	Point Point::operator-(const Point &other){
		return Point(x-other.x, y-other.y);
	}

	Point Point::operator+=(const Point &other){
		*this = *this+other;
		return *this;
	}

	Point Point::operator-=(const Point &other){
		*this = *this-other;
		return *this;
	}

	Point Point::operator*(const double &d){
		return Point(x*d, y*d);
	}

	Point Point::operator/(const double &d){
		return Point(x/d, y/d);
	}

	Point Point::operator*=(const double &d){
		*this = *this*d;
		return *this;
	}

	Point Point::operator/=(const double &d){
		*this = *this/d;
		return *this;
	}

}
