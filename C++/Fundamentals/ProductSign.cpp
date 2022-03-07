#include <iostream>
using namespace std;

int main()
{
	float firstNum = 0.0f;
	float secondNum = 0.0f;
	float thirdNum = 0.0f;

	cin >> firstNum >> secondNum >> thirdNum;

	int counter = 0;
	bool isZero = false;

	if (firstNum == 0.0f || secondNum == 0.0f || thirdNum == 0.0f)
	{
		cout << '+' << endl;
		return 0;
	}

	if (firstNum < 0)
	{
		counter++;
	}
	if (secondNum < 0)
	{
		counter++;
	}
	if (thirdNum < 0)
	{
		counter++;
	}
	if (counter % 2 == 0)
	{
		cout << '+';
	}
	else
	{
		cout << '-';
	}
}