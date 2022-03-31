#include <iostream>

using namespace std;

void addition(double x, double y) {

    double result = 0;

    result = x + y;
    cout << result << endl;


}

void subtraction(double x, double y) {

    double result = 0;

    result = x - y;
    cout << result << endl;


}

void multiplication(double x, double y) {

    double result = 0;

    result = x * y;
    cout << result << endl;


}

void division(double x, double y) {

    double result = 0;

    if (y == 0) {
        cout << "Can't divide by zero.";
    }
    else {
        result = x / y;
        cout << result << endl;
    }


}

int main()
{
    double x, y;
    cin >> x >> y;
    string operation = "";
    cin >> operation;

    if (operation == "+") {
        addition(x, y);
    }
    else if (operation == "-") {
        subtraction(x, y);
    }
    else if (operation == "*") {
        multiplication(x, y);
    }
    else if (operation == "/") {
        division(x, y);
    }


    return 0;
}
