#include <iostream>
using namespace std;

int main()
{
	int numPeople;
	string season;
	cin >> numPeople >> season;
	
	double totalSum = 0;

	if (numPeople <= 5)
	{
		if (season == "spring")
		{
			totalSum = numPeople * 50.00;
		}
		else if (season == "summer")
		{
			totalSum = numPeople * 48.50;
			totalSum -= totalSum * 0.15;
		}
		else if (season == "autumn")
		{
			totalSum = numPeople * 60.00;
		}
		else
		{
			totalSum = numPeople * 86.00;
			totalSum += totalSum * 0.08;
		}
	}
	else
	{
		if (season == "spring")
		{
			totalSum = numPeople * 48.00;
		}
		else if (season == "summer")
		{
			totalSum = numPeople * 45.00;
			totalSum -= totalSum * 0.15;
		}
		else if (season == "autumn")
		{
			totalSum = numPeople * 49.50;
		}
		else
		{
			totalSum = numPeople * 85.00;
			totalSum += totalSum * 0.08;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << totalSum << " leva." << endl;
	return 0;
}