#include "data.h"
#pragma once
#include <iostream>
class controlData {
public:
	int a;
	int b;

	void Insert(int a) {
		if (a < 1) return;
		this->a = a;
	}
	void jegop(int a) {
		int b = a;
		for (int c = 0; c < b; ++c) {
			this->a* this->a;
		}
	}
	void printData() {
		std::cout << this->a; 
	}
	int factorial(int num) {
		int result = 0;
		for (int k =1; k < num; ++k) {
			result = k * k;
			return result;
		}
	}
};