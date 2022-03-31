#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a = 0.0f;
	float b = 0.0f;
	float c = 0.0f;

	cin >> a >> b >> c;

	const float discriminant = b * b - (4 * a * c);
	const float sqRoot = sqrt(discriminant);

	if (discriminant > 0)
	{
		float x1 = (-b + sqRoot) / (2 * a);
		float x2 = (-b - sqRoot) / (2 * a);
		cout << x1 << ' ' << x2 << endl;
	}
	else if (sqrt(discriminant) == 0) {
		float x1 = -b / (2 * a);
		cout << x1 << endl;
	}
	else {
		cout << "no roots" << endl;

	}
}