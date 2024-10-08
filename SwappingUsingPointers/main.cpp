#include<iostream>
#include "swap.hpp"

int main() {
	int firstValue = 10;
	int secondValue = 20;

	std::cout << "Before swapping: firstValue = " << firstValue <<
		", secondValue = " << secondValue << std::endl;

	swap(&firstValue, &secondValue);

	std::cout << "After swapping:  firstValue = " << firstValue <<
		", secondValue = " << secondValue << std::endl;

	return 0;
}