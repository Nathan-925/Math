/*
 * Geometry.h
 *
 *  Created on: Jan 19, 2023
 *      Author: Nathan
 */

#ifndef PRIORI_MATH_GEOMETRY_H_
#define PRIORI_MATH_GEOMETRY_H_

#include <forward_list>

namespace priori{

	struct Vector{
		double x, y;

		Vector();
		Vector(double x, double y);

		Vector operator+(const Vector &other);
		Vector operator-(const Vector &other);

		double operator*(const Vector &other);

		Vector operator+=(const Vector &other);
		Vector operator-=(const Vector &other);

		Vector operator*(const double &d);
		Vector operator/(const double &d);

		Vector operator*=(const double &d);
		Vector operator/=(const double &d);

		bool operator==(const Vector &other);
		bool operator!=(const Vector &other);
	};

	struct Point : public Vector{
		Point();
		Point(double x, double y);
	};

	typedef std::forward_list<Point> Polygon;
}

#endif /* PRIORI_MATH_GEOMETRY_H_ */
