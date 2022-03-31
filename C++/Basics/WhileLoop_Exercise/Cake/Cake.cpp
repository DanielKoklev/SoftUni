#include <iostream>
#include <string>
using namespace std;

int main()
{
	int width, length; cin >> width >> length;
	int piecesCake = width * length;
	bool cakeIsOver = false;
	int currentNumber;

	string command; 
	cin >> command;
	while (command != "STOP")
	{
		currentNumber = stoi(command);
		piecesCake -= currentNumber;
		if (piecesCake < 0)
		{
			cakeIsOver = true;
			break;
		}
		cin >> command;
	}
	if (cakeIsOver)
	{
		cout << "No more cake left! You need " << abs(piecesCake) << " pieces more." << endl;
	}
	else
	{
		cout << piecesCake << " pieces are left." << endl;
	}
}