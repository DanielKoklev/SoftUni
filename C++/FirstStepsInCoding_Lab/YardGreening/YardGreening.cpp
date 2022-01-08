#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double yard;
    cin >> yard;
    yard *= 7.61;

    double discount = 0.18 * yard;

    double totalPrice = yard - discount;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "The final price is: " << totalPrice << " lv.\n";
    cout << "The discount is: " << discount << " lv.";
    
}
