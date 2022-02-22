#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
	int maxScore = INT_MIN;
	string name = "";
	string maxName = "";
	string currentName;
	int goals;

	getline(cin >> ws, currentName);

	while (currentName != "END")
	{
		cin >> goals;
		name = currentName;

		if (goals > maxScore)
		{
			maxScore = goals;
			maxName = name;
		}

		if (goals >= 10)
		{
			break;
		}

		getline(cin >> ws, currentName);
	}
	cout << maxName << " is the best player!" << endl;

	if (goals >= 3)
	{
		cout << "He has scored " << maxScore << " goals and made a hat-trick !!!" << endl;
	}
	else
	{
		cout << "He has scored " << goals << " goals." << endl;
	}
}