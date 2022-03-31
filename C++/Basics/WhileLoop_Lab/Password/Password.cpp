#include <iostream>
using namespace std;

int main()
{
	string username, password, input;
	cin >> username >> password;

	cin >> input;

	while (input != password)
	{
		cin >> input;
	}

	cout << "Welcome " << username << "!" << endl;
}