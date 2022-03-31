#include <iostream>
#include <string>
using namespace std;

int main()
{
	string command;
	int nextStep;
	int currentSteps = 0;

	while (currentSteps < 10000)
	{
		getline(cin >> ws, command);

		if (command == "Going home")
		{
			break;
		}

		nextStep = stoi(command);

		currentSteps += nextStep;
	}
	if (command == "Going home")
	{
		getline(cin >> ws, command);

		nextStep = stoi(command);

		currentSteps += nextStep;
		
		if (currentSteps >= 10000)
		{
			cout << "Goal reached! Good job!" << endl;
		}
		else
		{
			int neededSteps = 10000 - currentSteps;
			cout << neededSteps << " more steps to reach goal." << endl;
		}
	}
	else
	{
		cout << "Goal reached! Good job!" << endl;
	}
}