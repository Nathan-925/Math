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

		Vector operator+(Vector other) const;
		Vector operator-(Vector other) const;

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

	typedef std::forward_list<Vector> Polygon;
}

#endif /* PRIORI_MATH_GEOMETRY_H_ */
