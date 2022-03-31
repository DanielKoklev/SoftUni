#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	string operation;
	cin >> n1 >> n2 >> operation;

	double totalSumDouble = 0.0;
	int totalSumInt = 0;
	string oddOrEven;

	if (operation == "+") {
		totalSumInt = n1 + n2;
		if (totalSumInt % 2 == 0) {
			oddOrEven = "even";
		}
		else {
			oddOrEven = "odd";
		}
		cout << n1 << " " << operation << " " << n2 << " = " << totalSumInt << " - " << oddOrEven << endl;
	}
	else if (operation == "-") {
		totalSumInt = n1 - n2;
		if (totalSumInt % 2 == 0) {
			oddOrEven = "even";
		}
		else {
			oddOrEven = "odd";
		}
		cout << n1 << " " << operation << " " << n2 << " = " << totalSumInt << " - " << oddOrEven << endl;
	}
	else if (operation == "*") {
		totalSumInt = n1 * n2;
		if (totalSumInt % 2 == 0) {
			oddOrEven = "even";
		}
		else {
			oddOrEven = "odd";
		}
		cout << n1 << " " << operation << " " << n2 << " = " << totalSumInt << " - " << oddOrEven << endl;
	}
	else if (operation == "/" || operation == "%") {
		cout.setf(ios::fixed);
		cout.precision(2);

		if (n2 != 0) {
			if (operation == "/") {
				totalSumDouble = (double)n1 / n2;
				cout << n1 << " " << operation << " " << n2 << " = " << totalSumDouble << endl;
			}
			else if (operation == "%") {
				totalSumInt = n1 % n2;
				cout << n1 << " " << operation << " " << n2 << " = " << totalSumInt << endl;
			}
		}
		else {
			cout << "Cannot divide " << n1 << " by zero" << endl;

			return 0;
		}
	}
}