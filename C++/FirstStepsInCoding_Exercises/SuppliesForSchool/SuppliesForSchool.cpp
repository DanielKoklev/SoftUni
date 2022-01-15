#include <iostream>
using namespace std;

int main()
{
	int pencils;
	int sharpies;
	int cleaner;
	int percentage;

	cin >> pencils >> sharpies >> cleaner >> percentage;

	double packPencils = pencils * 5.80;
	double packSharpies = sharpies * 7.20;
	double wholeCleaner = cleaner * 1.20;

	double totalSum = packPencils + packSharpies + wholeCleaner;
	double discount = percentage / 100.0;
	double afterDiscount = totalSum - (totalSum * discount);

	cout << afterDiscount << endl;

	return 0;

}