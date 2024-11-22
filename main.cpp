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

int main()
{
	cout << my_pow(2, -5);
}