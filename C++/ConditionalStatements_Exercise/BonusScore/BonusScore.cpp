#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	double points = 0.0;

	if (number <= 100)
	{
		points = 5;
	}
	else if (number > 1000)
	{
		points = number * 0.1;
	}
	else
	{
		points = number * 0.2;
	}

	if (number % 2 == 0)
	{
		points += 1;
	}
	else if (number % 10 == 5)
	{
		points += 2;
	}

	cout << points << endl;
	cout << number + points << endl;

	return 0;

}