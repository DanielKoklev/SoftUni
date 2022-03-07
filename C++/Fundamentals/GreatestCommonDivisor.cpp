#include <iostream>
using namespace std;

int main()
{
	int num1, num2, greatestCommonDivisor;

	cin >> num1 >> num2;

	for (int i = 1; i <= num1 && i <= num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			greatestCommonDivisor = i;
		}
	}
	cout << greatestCommonDivisor << endl;
	return 0;
}