#include <iostream>
#include <climits>
using namespace std;

int main()
{
	double maxNum = INT_MIN;
	double minNum = INT_MAX;

	int firstNum;
	int secondNum;
	cin >> firstNum;

	for (int i = 1; i <= firstNum; i++)
	{
		cin >> secondNum;

		if (secondNum > maxNum)
		{
			maxNum = secondNum;
		}
		if (secondNum < minNum)
		{
			minNum = secondNum;
		}
	}
	cout << minNum << ' ' << maxNum;
	return 0;
}