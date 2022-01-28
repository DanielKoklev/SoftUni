#include <iostream>
using namespace std;

int main()
{
	string flowers;
	int numFlowers, budget;

	cin >> flowers >> numFlowers >> budget;

	double totalSum = 0;

	if (flowers == "Roses") {
		totalSum = numFlowers * 5;
		if (numFlowers > 80) {
			totalSum -= totalSum * 0.10;
		}
	}
	else if (flowers == "Dahlias") {
		totalSum = numFlowers * 3.80;
		if (numFlowers > 90) {
			totalSum -= totalSum * 0.15;
		}
	}
	else if (flowers == "Tulips") {
		totalSum = numFlowers * 2.80;
		if (numFlowers > 80) {
			totalSum -= totalSum * 0.15;
		}
	}
	else if (flowers == "Narcissus") {
		totalSum = numFlowers * 3;
		if (numFlowers < 120) {
			totalSum += totalSum * 0.15;
		}
	}
	else if (flowers == "Gladiolus") {
		totalSum = numFlowers * 2.50;
		if (numFlowers < 80) {
			totalSum += totalSum * 0.20;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= totalSum) {
		double totalPrice = budget - totalSum;

		cout << "Hey, you have a great garden with " << numFlowers << " " << flowers << " and " << totalPrice << " leva left." << endl;
	}
	else {
		double totalPrice = totalSum - budget;

		cout << "Not enough money, you need " << totalPrice << " leva more." << endl;
	}
}