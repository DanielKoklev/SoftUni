#include <iostream>
#include <string>

using namespace std;

int main()
{
	int poorGradeCount; cin >> poorGradeCount;

	string nextTask = "";
	int nextGrade;
	int poorGrade = 0;
	double average = 0;
	int numProblems = 0;
	string lastTask;

	while (poorGrade < poorGradeCount)
	{
		lastTask = nextTask;
		numProblems++;

		getline(cin >> ws, nextTask);
		
		if (nextTask == "Enough")
		{
			numProblems--;
			average = average / numProblems;

			cout.setf(ios::fixed);
			cout.precision(2);

			cout << "Average score: " << average << endl;
			cout << "Number of problems: " << numProblems << endl;
			cout << "Last problem: " << lastTask << endl;
			return 0;
		}
		
		cin >> nextGrade;

		if (nextGrade <= 4)
		{
			poorGrade++;
		}
		average += nextGrade;
	}

	cout << "You need a break, " << poorGradeCount << " poor grades." << endl;
	return 0;
}