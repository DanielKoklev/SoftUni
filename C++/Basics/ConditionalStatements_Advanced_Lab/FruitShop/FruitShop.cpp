#include <iostream>
using namespace std;

int main()
{
	string fruit, day;
	double quantity;
	cin >> fruit >> day >> quantity;

	cout.setf(ios::fixed);
	cout.precision(2);


	if (day == "Monday" || day == "Tuesday" ||
		day == "Wednesday" || day == "Thursday" ||
		day == "Friday") {
		if (fruit == "banana") {
			cout << 2.50 * quantity << endl;
		}
		else if (fruit == "apple") {
			cout << 1.20 * quantity << endl;
		}
		else if (fruit == "orange") {
			cout << 0.85 * quantity << endl;
		}
		else if (fruit == "grapefruit") {
			cout << 1.45 * quantity << endl;
		}
		else if (fruit == "kiwi") {
			cout << 2.70 * quantity << endl;
		}
		else if (fruit == "pineapple") {
			cout << 5.50 * quantity << endl;
		}
		else if (fruit == "grapes") {
			cout << 3.85 * quantity << endl;
		}
		else {
			cout << "error" << endl;
		}

	}
	else if (day == "Saturday" || day == "Sunday") {
		if (fruit == "banana") {
			cout << 2.70 * quantity << endl;
		}
		else if (fruit == "apple") {
			cout << 1.25 * quantity << endl;
		}
		else if (fruit == "orange") {
			cout << 0.90 * quantity << endl;
		}
		else if (fruit == "grapefruit") {
			cout << 1.60 * quantity << endl;
		}
		else if (fruit == "kiwi") {
			cout << 3.00 * quantity << endl;
		}
		else if (fruit == "pineapple") {
			cout << 5.60 * quantity << endl;
		}
		else if (fruit == "grapes") {
			cout << 4.20 * quantity << endl;
		}
		else {
			cout << "error" << endl;
		}

	}
	else {
		cout << "error" << endl;
	}
	return 0;
}