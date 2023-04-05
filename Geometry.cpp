/*
 * Math.cpp
 *
 *  Created on: Jan 3, 2023
 *      Author: Nathan
 */
#include <cmath>

#include "Geometry.h"

using namespace std;

namespace priori{

	Vector Vector::operator+(Vector other) const{
		other.x += x;
		other.y += y;
		return other;
	}

	Vector Vector::operator-(Vector other) const{
		other.x = x-other.x;
		other.y = y-other.y;
		return other;
	}

	double Vector::operator*(const Vector &other) const{
		return x*other.x + y*other.y;
	}

	Vector Vector::operator+=(const Vector &other){
		x += other.x;
		y += other.y;
		return *this;
	}

	Vector Vector::operator-=(const Vector &other){
		x -= other.x;
		y -= other.y;
		return *this;
	}

	Vector Vector::operator*(const double &d) const{
		return Vector{x*d, y*d};
	}

	Vector Vector::operator/(const double &d) const{
		return Vector{x/d, y/d};
	}

	Vector Vector::operator*=(const double &d){
		x *= d;
		y *= d;
		return *this;
	}

	Vector Vector::operator/=(const double &d){
		x /= d;
		y /= d;
		return *this;
	}

	bool Vector::operator==(const Vector &other) const{
		return x == other.x && y == other.y;
	}

	bool Vector::operator!=(const Vector &other) const{
		return x != other.x && y != other.y;
	}

	double Vector::magnitude(){
		return sqrt(x*x + y*y);
	}

	Vector Vector::normalize(){
		return Vector(*this)/magnitude();
	}

}
