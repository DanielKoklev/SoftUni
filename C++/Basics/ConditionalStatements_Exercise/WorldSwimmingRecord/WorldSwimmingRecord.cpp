#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double recordSeconds, lenghtMeters, secondsForMeter;
	cin >> recordSeconds >> lenghtMeters >> secondsForMeter;

	double swimmingTime = lenghtMeters * secondsForMeter;
	double slowingTime = round(lenghtMeters / 15.0) * 12.5;
	double totalTime = swimmingTime + slowingTime;

	cout.setf(ios::fixed);
	cout.precision(2);

	double diff = totalTime - recordSeconds;

	if (recordSeconds > totalTime) {
		cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << endl;
		
	}
	else {
		cout << "No, he failed! He was " << abs(diff) << " seconds slower." << endl;
	}
}