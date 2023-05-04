#include "IsKPeriodic.h"
#include <string>
#include <iostream>

int main() {


	std::string example_1 = "abcdabcdabcd";
	std::string example_2 = "abc";
	std::string example_3 = "abcde";

	std::cout << "The result of first example: " << IsKPeriodic(example_1, 4) << std::endl;
	std::cout << "The result of second example: " << IsKPeriodic(example_2, 5) << std::endl;
	std::cout << "The result of third example: " << IsKPeriodic(example_3, 0) << std::endl;

	return 0;
}