#include <iostream>
using namespace std;

int main()
{
	float strawberriesPrice, bananasAmount, orangesAmount, raspberriesAmount, strawberriesAmount;
	cin >> strawberriesPrice >> bananasAmount >> orangesAmount >> raspberriesAmount >> strawberriesAmount;

	float raspberriesPrice = strawberriesPrice / 2;
	float orangePrice = raspberriesPrice * 0.60;
	float bananasPrice = raspberriesPrice * 0.20;

	float strawberriesSum = strawberriesAmount * strawberriesPrice;
	float bananasSum = bananasAmount* bananasPrice;
	float orangesSum = orangesAmount * orangePrice;
	float raspberriesSum = raspberriesAmount * raspberriesPrice;

	float totalSum = strawberriesSum + bananasSum + orangesSum + raspberriesSum;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << totalSum << endl;
	return 0;
}