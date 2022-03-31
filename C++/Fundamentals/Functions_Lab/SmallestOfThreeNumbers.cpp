#include <iostream>
#include <climits>
using namespace std;

void smallestNum() {
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;

	
	int minNum = INT_MAX;

	if (num1 <= num2 && num1 <= num3) {
		minNum = num1;
	}
	else if (num2 <= num1 && num2 <= num3) {
		minNum = num2;
	}
	else if (num3 <= num1 && num3 <= num2) {
		minNum = num3;
	}
	cout << minNum << endl;
}

int main()
{
	smallestNum();
	return 0;
}