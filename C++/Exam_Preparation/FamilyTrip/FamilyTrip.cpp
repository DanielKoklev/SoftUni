#include <iostream>
using namespace std;

int main()
{
	double budget;
	int nights;
	double priceForNight;
	int percentage;

	int discountPrice;
	int totalNights;
	double percentageSpending;
	
	cin >> budget >> nights >> priceForNight >> percentage;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (nights > 7)
	{
		discountPrice = priceForNight * 0.95;
		totalNights = discountPrice * nights;

	}
	else
	{
		totalNights = priceForNight * nights;
	}

	percentageSpending = (percentage * 0.01) * budget;

	float diff = totalNights + percentageSpending;

	if (diff <= budget)
	{
		cout << "Ivanovi will be left with " << budget - diff << " leva after vacation." << endl;
	}
	else
	{
		cout << diff - budget << " leva needed." << endl;
	}

}