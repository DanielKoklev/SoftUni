#include <iostream>
#include <climits>
#include <string>


using namespace std;

int main()
{
	string firstNum;
	cin >> firstNum;
	int maxNum = INT_MIN;

	while (firstNum != "Stop")
	{	
		int number = stoi(firstNum);

		if (number > maxNum)
		{
			maxNum = number;
		}
		cin >> firstNum;
	}
	cout << maxNum << endl;
	return 0;
}