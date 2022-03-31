#include <iostream>
using namespace std;

int main()
{
	int lenght, wide, height, percentage;
	cin >> lenght >> wide >> height >> percentage;

	double volume = lenght * wide * height;
	double volumeLiters = volume * 0.001;
	double usedVolume = percentage / 100.0;
	double neededLiters = volumeLiters * (1 - usedVolume);

	cout << neededLiters << endl;

}