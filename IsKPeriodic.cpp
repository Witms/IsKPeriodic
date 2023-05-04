#include "IsKPeriodic.h"


bool IsKPeriodic(const std::string& str, const int& k) {
	if (k <= 0) {
		std::cout << "k is not more zero\n";
		return false; 
	}

	if (str.size() % k != 0) {
		std::cout << "the number of row elements is not a multiple of k\n";
		return false;
	}

	for (int i = 0; i + k < str.size(); ++i) {
		if (str[i] != str[i + k])
			return false;
	}
	
	return true;
}