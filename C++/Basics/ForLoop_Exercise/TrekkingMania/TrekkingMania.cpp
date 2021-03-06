#include <iostream>
using namespace std;

int main()
{
	int groupsCount;
	cin >> groupsCount;

	int allClimbers = 0;
	int groupClimbers;

	int musalaClimbers = 0;
	int monblanClimbers = 0;
	int kilimanjaroClimbers = 0;
	int k2Climbers = 0;
	int everestClimbers = 0;

	for (int i = 0; i < groupsCount; i++)
	{
		cin >> groupClimbers;

		allClimbers += groupClimbers;

		if (groupClimbers <= 5) {
			musalaClimbers += groupClimbers;
		}
		else if (groupClimbers >= 6 && groupClimbers <= 12) {
			monblanClimbers += groupClimbers;
		}
		else if (groupClimbers >= 13 && groupClimbers <= 25) {
			kilimanjaroClimbers += groupClimbers;
		}
		else if (groupClimbers >= 26 && groupClimbers <= 40) {
			k2Climbers += groupClimbers;
		}
		else {
			everestClimbers += groupClimbers;
		}
	}

	double musalaPercentage = (double)musalaClimbers / allClimbers * 100.0;
	double monblanPercentage = (double)monblanClimbers / allClimbers * 100.0;
	double kilimanjarolaPercentage = (double)kilimanjaroClimbers / allClimbers * 100.0;
	double k2Percentage = (double)k2Climbers / allClimbers * 100.0;
	double everestPercentage = (double)everestClimbers / allClimbers * 100.0;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << musalaPercentage << "%" << endl;
	cout << monblanPercentage << "%" << endl;
	cout << kilimanjarolaPercentage << "%" << endl;
	cout << k2Percentage << "%" << endl;
	cout << everestPercentage << "%" << endl;
}