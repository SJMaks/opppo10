#include <iostream>

using namespace std;

double my_pow(double num, int pow)
{
	double result = num;
	if (pow < 0) {
		for (int i = 1; i < -pow; i++) {
			result *= num;
		}
		result = 1 / result;
	}
	else {
		for (int i = 1; i < pow; i++) {
			result *= num;
		}
	}
	return result;
}

double my_pow_fast(double num, unsigned int pow)
{
	long result = 1;
	while (pow) {
		if (pow % 2 == 0) {
			pow /= 2;
			num *= num;
		}
		else {
			pow--;
			result *= num;
		}
	}

	return result;
}

int main()
{
	cout << my_pow(2, -5) << endl;
	cout << my_pow_fast(2, 5);
}