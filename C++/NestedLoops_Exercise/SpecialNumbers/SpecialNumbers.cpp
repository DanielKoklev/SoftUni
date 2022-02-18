#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	for (int number = 1111; number <= 9999; number++)
	{
		int units = number % 10;
		int tens = number / 10 % 10;
		int hundreds = number / 100 % 10;
		int thousands = number / 1000;

		if (units != 0 && tens != 0 && hundreds != 0 && thousands != 0)
		{
			if (n % units == 0 && n % tens == 0 && n % hundreds == 0 && n % thousands == 0)
			{
				cout << number << " ";
			}
		}
	}
}