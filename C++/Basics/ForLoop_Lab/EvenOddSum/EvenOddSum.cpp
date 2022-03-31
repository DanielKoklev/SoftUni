#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int odd = 0;
	int even = 0;

	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;

		if (i % 2 == 0) {
			even += num;
		}
		else {
			odd += num;
		}
	}

	int diff = abs(odd - even);
	if (diff == 0) {
		cout << "Yes" << endl;
		cout << "Sum = " << odd << endl;
	}
	else {
		cout << "No" << endl;
		cout << "Diff = " << diff << endl;
	}

	return 0;
}