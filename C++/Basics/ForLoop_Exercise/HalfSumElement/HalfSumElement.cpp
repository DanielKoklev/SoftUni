#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int maxElement = INT_MIN;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		sum += num;

		if (num > maxElement) {
			maxElement = num;
		}
	}
	sum -= maxElement;

	if (sum == maxElement) {
		cout << "Yes" << endl;
		cout << "Sum = " << maxElement << endl;
	}
	else {
		cout << "No" << endl;
		cout << "Diff = " << abs(maxElement - sum) << endl;
	}

}