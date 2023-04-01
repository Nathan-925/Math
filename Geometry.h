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

	struct Point;

	struct Vector{
		double x, y;

		Vector();
		Vector(double x, double y);

		Vector operator+(const Vector &other) const;
		Vector operator-(const Vector &other) const;

		double operator*(const Vector &other) const;

		Vector operator+=(const Vector &other);
		Vector operator-=(const Vector &other);

		Vector operator*(const double &d) const;
		Vector operator/(const double &d) const;

		Vector operator*=(const double &d);
		Vector operator/=(const double &d);

		bool operator==(const Vector &other) const;
		bool operator!=(const Vector &other) const;
	};

	struct Point : public Vector{
		Point();
		Point(double x, double y);
		Point(Vector other);

		Point operator+(const Point &other) const;
		Point operator-(const Point &other) const;

		double operator*(const Point &other) const;

		Point operator+=(const Point &other);
		Point operator-=(const Point &other);

		Point operator*(const double &d) const;
		Point operator/(const double &d) const;

		Point operator*=(const double &d);
		Point operator/=(const double &d);

		bool operator==(const Point &other) const;
		bool operator!=(const Point &other) const;
	};

	typedef std::forward_list<Point> Polygon;
}

#endif /* PRIORI_MATH_GEOMETRY_H_ */
