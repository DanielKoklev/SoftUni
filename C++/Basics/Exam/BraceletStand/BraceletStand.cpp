#include <iostream>
using namespace std;

int main()
{
	double everydayMoney, profitPerDay, totalExpenses, priceForGift;
	cin >> everydayMoney >> profitPerDay >> totalExpenses >> priceForGift;

	double savedMoney = 5 * everydayMoney;
	double profitMoney = 5 * profitPerDay;
	double totalSavedMoney = savedMoney + profitMoney;
	double moneyAfterExpenses = totalSavedMoney - totalExpenses;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (moneyAfterExpenses >= priceForGift)
	{
		cout << "Profit: " << moneyAfterExpenses << " BGN, the gift has been purchased." << endl;
	}
	else
	{
		cout << "Insufficient money: " << priceForGift - moneyAfterExpenses << " BGN." << endl;
	}
}