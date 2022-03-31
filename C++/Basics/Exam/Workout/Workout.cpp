#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int numDays;
	double kmRanFirstDay;

	cin >> numDays >> kmRanFirstDay;

	double totalKm = kmRanFirstDay;
	double nextDay;

	for (int i = 0; i < numDays; i++)
	{
		cin >> nextDay;
		kmRanFirstDay += kmRanFirstDay * (nextDay / 100);
		totalKm += kmRanFirstDay;
	}

	if (totalKm >= 1000)
	{
		cout << "You've done a great job running " << ceil(totalKm - 1000) << " more kilometers!" << endl;
	}
	else
	{
		cout << "Sorry Mrs. Ivanova, you need to run " << ceil(1000 - totalKm) << " more kilometers" << endl;
	}
}