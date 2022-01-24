#include <iostream>
using namespace std;

int main()
{
	double trip, puzzles, talkingDolls, puffBears, minions, trucks;
	cin >> trip >> puzzles >> talkingDolls >> puffBears >> minions >> trucks;

	double sumOfToys = puzzles * 2.60 + talkingDolls * 3 + puffBears * 4.10 + minions * 8.20 + trucks * 2;
	int numberToys = puzzles + talkingDolls + puffBears + minions + trucks;
	
	if (numberToys >= 50) {
		sumOfToys -= sumOfToys * 0.25;
	}

	sumOfToys -= sumOfToys * 0.10;

	cout.setf(ios::fixed);
	cout.precision(2);

	double diff = trip - sumOfToys;

	if (diff > 0) {
		cout << "Not enough money! " << diff << " lv needed." << endl;
	}
	else {
		cout << "Yes! " << abs(diff) << " lv left." << endl;
	}
	
}