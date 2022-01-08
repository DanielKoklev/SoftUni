#include <iostream>
using namespace std;

int main()
{
	string architect;
	cin >> architect;

	int numberProjects;
	cin >> numberProjects;

	int timeProject = numberProjects * 3;

	cout << "The architect " << architect << " will need " << timeProject << " hours to complete " << numberProjects << " project/s.";

	return 0;
}
