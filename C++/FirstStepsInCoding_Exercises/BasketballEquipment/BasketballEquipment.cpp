#include <iostream>
using namespace std;

int main()
{
	int yearlyTax;
	cin >> yearlyTax;

	double sneakers = yearlyTax - (yearlyTax * 0.40);
	double suit = sneakers - (sneakers * 0.20);
	double ball = suit * 0.25;
	double accesories = ball * 0.20;

	double totalSum = yearlyTax + sneakers + suit + ball + accesories;

	cout << totalSum << endl;


}