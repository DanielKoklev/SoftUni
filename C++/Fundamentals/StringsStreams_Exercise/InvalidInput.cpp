#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// H 2 adasashd oneTwo -1 4

int main(void) {

    string inp;
    getline(cin, inp);

    istringstream input(inp);
    string current;

    ostringstream streamLetters;
    int sum = 0;

    while (input >> current) {

        char c = current[0];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            streamLetters << current << " ";
        else {
            int n = stoi(current);
            sum += n;
        }

    }

    cout << sum << endl;
    cout << streamLetters.str() << endl;

    return 0;
}