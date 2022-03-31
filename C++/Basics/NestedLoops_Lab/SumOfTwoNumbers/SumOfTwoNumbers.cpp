#include <iostream>
using namespace std;

int main()
{
	int startNumber, endNumber, magicNumber;
	cin >> startNumber >> endNumber >> magicNumber;

	int count = 0;

	for (int x1 = startNumber; x1 <= endNumber; x1++)
	{
		for (int x2 = startNumber; x2 <= endNumber; x2++)
		{
			count++;
			int sum = x1 + x2;
			if (sum == magicNumber)
			{
				cout << "Combination N:" << count << " (" << x1 << " + " << x2 << " = " << magicNumber << ")" << endl;
				return 0;
			}
		}
	}
	cout << count << " combinations - neither equals " << magicNumber << endl;
	return 0;
}