#include <iostream>
#include <cmath>
using namespace std;

void numPower() {
	int num, power;
	cin >> num >> power;

	int result = pow(num, power);
	cout << result;
}

int main()
{
	numPower();
	return 0;
}

/* code snippet without pre-defined c++ function pow()

	int main()
	{
		// x = number | y  = power

		int x, y;
		cin >> x >> y;
		int result = 1;

		for (int i = 1; i <= y; i++)
		{
			result *= x;
		}
		cout << result << endl;
	}
*/