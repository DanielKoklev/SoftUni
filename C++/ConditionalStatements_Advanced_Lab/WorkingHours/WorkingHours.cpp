#include <iostream>
using namespace std;

int main()
{
	int time;
	string day;

	cin >> time >> day;

	if (time >= 10 && time <= 18 && day != "Sunday") {
		cout << "open";
	}
	else {
		cout << "closed";
	}
}