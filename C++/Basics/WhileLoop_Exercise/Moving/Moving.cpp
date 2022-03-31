#include <iostream>
#include <string>
using namespace std;

int main()
{
	int width, length, height; cin >> width >> length >> height;

	bool fullSpace = false;
	
	int currentSpace = 0;

	int currentCubic;

	int totalMeters = width * length * height;

	string command;
	cin >> command;

	while (command != "Done")
	{
		currentCubic = stoi(command);
		currentSpace += currentCubic;

		if (currentSpace > totalMeters)
		{
			fullSpace = true;
			break;
		}

		cin >> command;
	}
	if (fullSpace)
	{
		int neededSpace = currentSpace - totalMeters;
		cout << "No more free space! You need " << abs(neededSpace) << " Cubic meters more." << endl;
	}
	else
	{
		int freeSpace = totalMeters - currentSpace;
		cout << freeSpace << " Cubic meters left." << endl;
	}
}