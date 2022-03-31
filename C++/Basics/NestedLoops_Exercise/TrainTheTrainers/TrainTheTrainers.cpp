#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n; cin >> n;

	cin.ignore();
	cout.setf(ios::fixed);
	cout.precision(2);

	string input;
	getline(cin, input);

	double sumAllGrades = 0;
	int countAllGrades = 0;

	while (input != "Finish")
	{

		double sumGradesForPresentation = 0;
		for (int jury = 1; jury <= n; jury++)
		{
			double grade; cin >> grade;

			sumGradesForPresentation += grade;

			sumAllGrades += grade;
			countAllGrades++;
		}

		double averageGrade = sumGradesForPresentation / n;
		cout << input << " - " << averageGrade << "." << endl;

		cin.ignore();
		getline(cin, input);
	}

	double averageAll = sumAllGrades / countAllGrades;
	cout << "Student's final assessment is " << averageAll << "." << endl;
	
	return 0;
}