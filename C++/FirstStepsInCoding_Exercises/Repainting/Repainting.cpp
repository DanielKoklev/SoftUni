#include <iostream>
using namespace std;

int main()
{
	double nylonNeeded;
	double paintLiters;
	double thinnerLiters;
	double timeWorkers;

	cin >> nylonNeeded >> paintLiters >> thinnerLiters >> timeWorkers;
	
	double sumNylon = (nylonNeeded + 2) * 1.50;
	double sumPaint = (paintLiters + (paintLiters * 0,1)) * 14.50;
	double sumThinner = thinnerLiters * 5.00;

	double totalSum = sumNylon + sumPaint + sumThinner + 0.40;
	double sumWorkers = (totalSum * 0.30) * timeWorkers;

	double finalSum = totalSum + sumWorkers;

	cout << finalSum << endl;


}