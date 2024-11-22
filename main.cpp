#include <iostream>

using namespace std;

double my_pow(double num, unsigned int pow)
{
	double result = num;
	for (int i = 1; i < pow; i++) {
		result *= num;
	}
	return result;
}

int main()
{
	cout << my_pow(2, 5);
}