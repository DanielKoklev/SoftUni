#include <iostream>
using namespace std;

int main()
{
    int numberPages;
    int pagesHour;
    int numberDays;

    cin >> numberPages >> pagesHour >> numberDays;


    int totalTime = numberPages / pagesHour;
    int neededHours = totalTime / numberDays;

    cout << neededHours << endl;

}
