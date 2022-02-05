#include <iostream>
using namespace std;

int main()
{
	int firstNum;
	cin >> firstNum;

	int sumNum = 0;
	int currentSum;

	while (sumNum < firstNum)
	{
		cin >> currentSum;
		sumNum += currentSum;
	}

	cout << sumNum << endl;
}