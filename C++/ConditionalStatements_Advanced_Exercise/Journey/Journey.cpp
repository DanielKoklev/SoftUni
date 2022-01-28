#include <iostream>
using namespace std;

int main()
{
	double budget, price;
	string season;

	string destination;
	string typeOfPlace;

	cin >> budget >> season;

	if (budget <= 100) {
		destination = "Bulgaria";

		if (season == "summer") {
			typeOfPlace = "Camp";
			price = budget * 0.30;
		}
		else if (season == "winter") {
			typeOfPlace = "Hotel";
			price = budget * 0.70;
		}
	}
	else if (budget <= 1000) {
		destination = "Balkans";

		if (season == "summer") {
			typeOfPlace = "Camp";
			price = budget * 0.40;
		}
		else if (season == "winter") {
			typeOfPlace = "Hotel";
			price = budget * 0.80;
		}
	}
	else if (budget > 1000) {
		destination = "Europe";
		typeOfPlace = "Hotel";
		price = budget * 0.90;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Somewhere in " << destination << endl;
	cout << typeOfPlace << " - " << price << endl;
}