#include <iostream>
using namespace std;

int main()
{
	double change; cin >> change;
	int coinsCounter = 0;
	change = int(change * 100);

	while (change > 0)
	{
		if (change - 200 >= 0)
		{
			coinsCounter++;
			change -= 200;
			continue;
		}
		else if (change - 100 >= 0)
		{
			coinsCounter++;
			change -= 100;
			continue;
		}
		else if (change - 50 >= 0)
		{
			coinsCounter++;
			change -= 50;
			continue;
		}
		else if (change - 20 >= 0)
		{
			coinsCounter++;
			change -= 20;
			continue;
		}
		else if (change - 10 >= 0)
		{
			coinsCounter++;
			change -= 10;
			continue;
		}
		else if (change - 5 >= 0)
		{
			coinsCounter++;
			change -= 5;
			continue;
		}
		else if (change - 2 >= 0)
		{
			coinsCounter++;
			change -= 2;
			continue;
		}
		else if (change - 1 >= 0)
		{
			coinsCounter++;
			change -= 1;
			continue;
		}
		else
		{
			break;
		}
	}
	
	cout << coinsCounter << endl;
}