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

	Vector Vector::operator+(const Vector &other) const{
		return Vector(x+other.x, y+other.y);
	}

	Vector Vector::operator-(const Vector &other) const{
		return Vector(x-other.x, y-other.y);
	}

	double Vector::operator*(const Vector &other) const{
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

	Vector Vector::operator*(const double &d) const{
		return Vector(x*d, y*d);
	}

	Vector Vector::operator/(const double &d) const{
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

	bool Vector::operator==(const Vector &other) const{
		return x == other.x && y == other.y;
	}

	bool Vector::operator!=(const Vector &other) const{
		return x != other.x && y != other.y;
	}

	Point::Point() : Vector() {};

	Point::Point(double x, double y) : Vector(x, y) {};

	Point::Point(Vector other) : Vector(other) {};

	Point Point::operator+(const Point &other) const{
		return Vector::operator+(other);
	}

	Point Point::operator-(const Point &other) const{
		return Vector::operator-(other);
	}

	double Point::operator*(const Point &other) const{
		return Vector::operator*(other);
	}

	Point Point::operator+=(const Point &other){
		return Vector::operator+=(other);
	}

	Point Point::operator-=(const Point &other){
		return Vector::operator-=(other);
	}

	Point Point::operator*(const double &d) const{
		return Vector::operator*(d);
	}

	Point Point::operator/(const double &d) const{
		return Vector::operator/(d);
	}

	Point Point::operator*=(const double &d){
		return Vector::operator*=(d);
	}

	Point Point::operator/=(const double &d){
		return Vector::operator/=(d);
	}

	bool Point::operator==(const Point &other) const{
		return Vector::operator==(other);
	}

	bool Point::operator!=(const Point &other) const{
		return Vector::operator!=(other);
	}

}
