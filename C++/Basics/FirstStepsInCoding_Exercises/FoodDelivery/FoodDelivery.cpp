#include <iostream>
using namespace std;

int main()
{
	int chickenMenus, fishMenus, vegetarianMenus;
	cin >> chickenMenus >> fishMenus >> vegetarianMenus;

	double sumChickenMenus = chickenMenus * 10.35;
	double sumFishMenus = fishMenus * 12.40;
	double sumVegetarianMenus = vegetarianMenus * 8.15;

	double priceMenus = sumChickenMenus + sumFishMenus + sumVegetarianMenus;
	double priceDesert = priceMenus * 0.2;
	double priceDelivery = 2.50;

	double finalSum = priceMenus + priceDelivery + priceDesert;

	cout << finalSum << endl;


}