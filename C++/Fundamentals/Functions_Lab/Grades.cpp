#include <iostream>
using namespace std;

void gradeWords() {
	double n = 0;
	cin >> n;
	string type;

	if (n >= 2.00 && n <= 2.99) {
		type = "Fail";
	}
	else if (n >= 3.00 && n <= 3.49) {
		type = "Poor";
	}
	else if (n >= 3.50 && n <= 4.49) {
		type = "Good";
	}
	else if (n >= 4.50 && n <= 5.49) {
		type = "Very good";
	}
	else if (n >= 5.50 && n <= 6.00) {
		type = "Excellent";
	}

	cout << type << endl;
}

int main()
{
	gradeWords();
	return 0;
}