#pragma once
#include <iostream>
class controlData {
public:
	int a;
	int b;

	void Insert(int a) {
		this->a = a;
	}
	int jegop(int a) {
		int b = a;
		int result = 0;
		for (int c =0; c < b; ++c) {
			result = this->a * this->a;
		}
		return result;
	}
	void printData() {
		std::cout << this->a;
	}
	int factorial(int num) {
		int result = 0;
		for (int k = 1; k < num; ++k) {
			result = k * k;
			return result;
		}
	}
};