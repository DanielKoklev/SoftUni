#include <iostream>
using namespace std;

const unsigned maxSize = 200;

bool getArray(int arr[], unsigned& arrSize) {

    cin >> arrSize;

    if (arrSize > maxSize)
        return false;

    for (int i = 0; i < arrSize; i++)
        cin >> arr[i];

    return true;
}

int main(void)
{
    unsigned arrSize;
    int arr[maxSize];

    getArray(arr, arrSize);

    for (int mul1 = 0; mul1 < arrSize; mul1++)
        for (int mul2 = 0; mul2 < arrSize; mul2++)
            cout << arr[mul1] * arr[mul2] << " ";

    cout << endl;

    return 0;
}