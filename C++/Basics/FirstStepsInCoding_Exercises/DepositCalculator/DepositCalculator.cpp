#include <iostream>
using namespace std;

int main()
{
	double depositSum;
	int depositPeriod;
	double yearlyYield;

	cin >> depositSum;
	cin >> depositPeriod;
	cin >> yearlyYield;

	double yield = depositSum * (yearlyYield / 100);

	double montlyYield = yield / 12;

	double totalSum = depositSum + depositPeriod * montlyYield;

	cout << totalSum << endl;

}