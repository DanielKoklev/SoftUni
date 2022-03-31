#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	//числото е 324 -> винаги трицифрено

	int units = number % 10; // единици
	int tens = number / 10 % 10; // десетици
	int hundreds = number / 100 % 10; // стотици

	for (int i = 1; i <= units ; i++)
	{
		for (int j = 1; j <= tens; j++)
		{
			for (int k = 1; k <= hundreds; k++)
			{
				cout << i << " * " << j << " * " << k << " = " << i * j * k << ";" << endl;
			}
		}
	}
}