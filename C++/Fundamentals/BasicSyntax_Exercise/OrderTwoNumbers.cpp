#include <iostream>
using namespace std;

int main()
{
	int firstNum = 0;
	int secondNum = 0;

	cin >> firstNum >> secondNum;

	if (firstNum < secondNum)
	{
		cout << firstNum << ' ' << secondNum << endl;
	}
	else {
		cout << secondNum << ' ' << firstNum << endl;
	}
	return 0;

}