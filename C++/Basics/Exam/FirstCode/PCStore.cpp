#include <iostream>
using namespace std;

int main()
{
	double cpuInUsd, gpuInUsd, ramInUsd;
	int numOfRam;
	double percentDiscount;

	cin >> cpuInUsd >> gpuInUsd >> ramInUsd >> numOfRam >> percentDiscount;

	double cpuInLv = cpuInUsd * 1.57;
	double gpuInLv = gpuInUsd * 1.57;
	double ramInLv = ramInUsd * 1.57;

	double totalRam = numOfRam * ramInLv;

	double cpuAfterDiscount = cpuInLv - (cpuInLv * percentDiscount);
	double gpuAfterDiscount = gpuInLv - (gpuInLv * percentDiscount);

	double totalSum = cpuAfterDiscount + gpuAfterDiscount + totalRam;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Money needed - " << totalSum << " leva." << endl;
}