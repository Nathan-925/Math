/*
 * Interpolation.h
 *
 *  Created on: Dec 7, 2022
 *      Author: Nathan
 */

#ifndef INTERPOLATION_H_
#define INTERPOLATION_H_

#include <cmath>
#include <forward_list>

namespace priori{
	template <class T>
	std::forward_list<T> lerp(int i0, T d0, int i1, T d1){
		std::forward_list<T> list;
		T slope = (d1-d0)/(i1-i0);
		T val = d1;
		for(int i = 0; i < std::abs(i1-i0); i++){
			list.push_front(val);
			val -= slope;
		}
		list.push_front(d0);
		return list;
	}

	template <class T>
	T lerp(double d, T t1, T t2){
		return t1+(t2-t1)*d;
	}
}

#endif /* INTERPOLATION_H_ */
