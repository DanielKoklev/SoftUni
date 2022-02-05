#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int counter = 0;
	double balance = 0.0;

	cout.setf(ios::fixed);
	cout.precision(2);

	while (counter < n)
	{
		double amount;
		cin >> amount;
		if (amount < 0)
		{
			cout << "Invalid operation!" << endl;
			break;
		}
		balance += (double)amount;
		cout << "Increase: " << (double)amount << endl;
		counter++;
	}
	cout << "Total: " << balance << endl;
}