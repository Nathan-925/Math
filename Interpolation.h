/*
 * Interpolation.h
 *
 *  Created on: Dec 7, 2022
 *      Author: Nathan
 */

#ifndef INTERPOLATION_H_
#define INTERPOLATION_H_

#include <cmath>

namespace priori{
	template <class T>
	T* lerp(int i0, T d0, int i1, T d1, int length = 0, int offset = 0){
		if(length == 0)
			length = i1-i0+1;

		T* out = new T[length];
		T slope = (d1-d0)/(i1-i0);
		T val = d0;
		for(int i = 0; i < std::abs(offset); i++)
			if(offset > 0)
				val += slope;
			else
				val -= slope;

		for(int i = 0; i < length; i++){
			out[i] = val;
			val += slope;
		}
		return out;
	}

	template <class T>
	T* lerp(T* arr, int i0, T d0, int i1, T d1, int length = 0, int offset = 0){
		if(length == 0)
			length = i1-i1;

		T slope = (d1-d0)/(i1-i0);
		T val = d0;
		for(int i = 0; i < std::abs(offset); i++)
			if(offset > 0)
				val += slope;
			else
				val -= slope;

		for(int i = 0; i < length; i++){
			arr[i] = val;
			val += slope;
		}
		return arr;
	}

	template <class T>
	T lerp(double d, T t1, T t2){
		return t1*(1-d) + t2*d;
	}
}

#endif /* INTERPOLATION_H_ */
