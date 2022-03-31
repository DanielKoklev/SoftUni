#include <iostream>
using namespace std;

int main()
{
	string name;
	cin >> name;

	int grades = 1;
	int fail = 0;
	double totalGrade = 0;
	while (grades <= 12)
	{
		double grade; cin >> grade;
		if (grade >= 4.00)
		{
			totalGrade += grade;
			grades++;
		}
		else
		{
			fail++;
		}
		if (fail >= 2)
		{
			cout << name << " has been excluded at " << grades << " grade" << endl;
		}
	}
	double averGrade = totalGrade / 12;

	if (grades >= 12)
	{
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << name << " graduated. Average grade: " << averGrade << endl;
	}
}