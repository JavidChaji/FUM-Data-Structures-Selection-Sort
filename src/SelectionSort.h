// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad
//
// Author: Kamaledin Ghiasi-Shirazi

#pragma once
#include "ISort.h"
#include <iostream>
template <class T>
class SelectionSort: public ISort<T>{
public:
	virtual void Sort (T* A, int n){
		//write youre code here
		int i,j,min = 0;
		for (i = 0 ; i < n-1 ; i++) {
			min = i;
			for (j = i+1 ; j < n; j++) {
				if (A[j] < A[min]) {
					min = j;
				}
			}
			if(i != min ){
			   T temp = A[i];
			    A[i] = A[min];
			    A[min] = temp;
			}
		}
	}
};
