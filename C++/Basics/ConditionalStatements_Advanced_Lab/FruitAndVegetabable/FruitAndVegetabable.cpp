#include <iostream>
using namespace std;

int main()
{
	string product;
	cin >> product;

	if (product == "banana" || product == "apple" ||
		product == "kiwi" || product == "cherry" ||
		product == "lemon" || product == "grapes") {

		cout << "fruit" << endl;
	}
	else if (product == "tomato" || product == "cucumber" ||
		product == "carrot" || product == "pepper") {

		cout << "vegetable" << endl;
	}
	else {
		cout << "unknown" << endl;
	}
	return 0;
}