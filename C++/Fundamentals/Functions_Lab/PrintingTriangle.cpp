#include <iostream>
using namespace std;

void printingTriangle() {
	int rows;
	cin >> rows;

	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << "\n";
	}

	for (int k = rows - 1; k >= 1; k--)
	{
		for (int l = 1; l <= k; l++)
		{
			cout << l << " ";
		}
		cout << endl;
	}
	
}

int main() {

	printingTriangle();
	return 0;
}