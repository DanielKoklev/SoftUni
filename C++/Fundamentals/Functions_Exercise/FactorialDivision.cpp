#include <iostream>

using namespace std;

double factorial(double x) {
    double result = 1;
    for (; x >= 2; x--)
        result *= x;

    return result;
}

int main()
{
    double x, y;
    cin >> x >> y;

    x = factorial(x);
    y = factorial(y);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << x / y << endl;

    return 0;
}