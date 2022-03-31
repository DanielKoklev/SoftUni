#include <iostream>

using namespace std;

void numberValue() {
	int n; cin >> n;
	string type;

	if (n > 0)
	{
		type = "positive";
	}
	else if (n < 0)
	{
		type = "negative";
	}
	else 
	{
		type = "zero";
	}

	cout << "The number " << n << " is " << type << "." << endl;
}

int main()
{
	numberValue();
	return 0;
}