#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	//������� � 324 -> ������ ����������

	int units = number % 10; // �������
	int tens = number / 10 % 10; // ��������
	int hundreds = number / 100 % 10; // �������

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