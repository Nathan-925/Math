/*
 * Math.cpp
 *
 *  Created on: Jan 3, 2023
 *      Author: Nathan
 */
#include "Geometry.h"

namespace priori{

	Point::Point() : x(), y() {};

	Point::Point(double x, double y) : x(x), y(y) {};

	Point Point::operator+(const Point &other){
		return Point(x+other.x, y+other.y);
	}

	Point Point::operator-(const Point &other){
		return Point(x-other.x, y-other.y);
	}

	Point Point::operator*(const Point &other){
		return Point(x*other.x, y*other.y);
	}

	Point Point::operator/(const Point &other){
		return Point(x/other.x, y/other.y);
	}

	Point Point::operator+=(const Point &other){
		x += other.x;
		y += other.y;
		return *this;
	}

	Point Point::operator-=(const Point &other){
		x -= other.x;
		y -= other.y;
		return *this;
	}

	Point Point::operator*=(const Point &other){
		x *= other.x;
		y *= other.y;
		return *this;
	}

	Point Point::operator/=(const Point &other){
		x /= other.x;
		y /= other.y;
		return *this;
	}

	Point Point::operator*(const double &d){
		return Point(x*d, y*d);
	}

	Point Point::operator/(const double &d){
		return Point(x/d, y/d);
	}

	Point Point::operator*=(const double &d){
		x *= d;
		y *= d;
		return *this;
	}

	Point Point::operator/=(const double &d){
		x /= d;
		y /= d;
		return *this;
	}

}
