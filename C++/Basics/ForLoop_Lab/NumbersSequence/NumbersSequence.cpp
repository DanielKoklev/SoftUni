#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int maxNumber = INT_MIN;
	int minNumber = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		if (num > maxNumber) {
			maxNumber = num;
		}
		if (num < minNumber) {
			minNumber = num;
		}
	}
	cout << "Max number: " << maxNumber << endl;
	cout << "Min number: " << minNumber << endl;
}