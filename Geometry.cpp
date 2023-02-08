/*
 * Math.cpp
 *
 *  Created on: Jan 3, 2023
 *      Author: Nathan
 */
#include "Geometry.h"

namespace priori{

	Vector::Vector() : x(0), y(0) {};

	Vector::Vector(double x, double y) : x(x), y(y) {};

	Vector Vector::operator+(const Vector &other){
		return Vector(x+other.x, y+other.y);
	}

	Vector Vector::operator-(const Vector &other){
		return Vector(x-other.x, y-other.y);
	}

	double Vector::operator*(const Vector &other){
		return x*x + y*y;
	}

	Vector Vector::operator+=(const Vector &other){
		*this = *this+other;
		return *this;
	}

	Vector Vector::operator-=(const Vector &other){
		*this = *this-other;
		return *this;
	}

	Vector Vector::operator*(const double &d){
		return Vector(x*d, y*d);
	}

	Vector Vector::operator/(const double &d){
		return Vector(x/d, y/d);
	}

	Vector Vector::operator*=(const double &d){
		*this = *this*d;
		return *this;
	}

	Vector Vector::operator/=(const double &d){
		*this = *this/d;
		return *this;
	}

	bool Vector::operator==(const Vector &other){
		return x == other.x && y == other.y;
	}

	bool Vector::operator!=(const Vector &other){
		return x != other.x && y != other.y;
	}

	Point::Point() : Vector() {};
	Point::Point(double x, double y) : Vector(x, y) {};

}
