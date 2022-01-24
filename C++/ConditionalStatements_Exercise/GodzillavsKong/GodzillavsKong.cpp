#include <iostream>
using namespace std;

int main()
{
	double budget, pricePerCloth;
	int people;
	cin >> budget >> people >> pricePerCloth;

	double priceForDecoration = budget * 0.10;
	double sumForCloth = people * pricePerCloth;

	if (people >= 150) {
		sumForCloth -= sumForCloth * 0.10;
	}

	double totalSum = priceForDecoration + sumForCloth;

	double diff = budget - totalSum;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (diff < 0) {
		cout << "Not enough money!" << endl;
		cout << "Wingard needs " << abs(diff) << " leva more." << endl;
	}
	else {
		cout << "Action!" << endl;
		cout << "Wingard starts filming with " << diff << " leva left." << endl;
	}

}