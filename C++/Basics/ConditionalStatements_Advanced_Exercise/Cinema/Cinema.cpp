#include <iostream>
using namespace std;

int main()
{
	string typeProjections;
	int rows, columns;

	cin >> typeProjections >> rows >> columns;

	cout.setf(ios::fixed);
	cout.precision(2);

	double ticketPrice = 0.0;

	if (typeProjections == "Premiere") {
		ticketPrice = 12;
	}
	else if (typeProjections == "Normal") {
		ticketPrice = 7.50;
	}
	else if (typeProjections == "Discount") {
		ticketPrice = 5;
	}

	int allSeats = rows * columns;
	double totalPrice = allSeats * ticketPrice;

	cout << totalPrice << " leva" << endl;
}