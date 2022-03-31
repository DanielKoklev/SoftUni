#include <iostream>
#include <string>
using namespace std;

int main()
{
	double neededMoney, ownedMoney;
	cin >> neededMoney >> ownedMoney;

	string saveOrSpend = "";
	double nextMoney;
	
	int spendCount = 0;
	int daysCount = 0;

	while (ownedMoney < neededMoney && spendCount < 5)
	{
		daysCount++;
		getline(cin >> ws, saveOrSpend);
		cin >> nextMoney;

		if (saveOrSpend == "spend")
		{
			ownedMoney -= nextMoney;

			if (ownedMoney < 0) ownedMoney = 0;

			spendCount++;
		}
		else if (saveOrSpend == "save")
		{
			ownedMoney += nextMoney;
			spendCount = 0;
		}
	}
	if (spendCount == 5)
	{
		cout << "You can't save the money." << endl;
		cout << daysCount << endl;
	}
	else
	{
		cout << "You saved the money for " << daysCount << " days." << endl;
	}
}