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

	struct Point{
		double x, y;

		Point();
		Point(double x, double y);
	};

	typedef std::forward_list<Point> Polygon;
}

#endif /* PRIORI_MATH_GEOMETRY_H_ */
