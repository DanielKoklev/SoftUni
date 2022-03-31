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

    unsigned absoluteDifference = 0;

    for (int first = 0; first < arrSize; first++)
        for (int second = 0; second < arrSize; second++) {

            int currDiff;

            if (arr[first] > arr[second])
                currDiff = arr[first] - arr[second];
            else
                currDiff = arr[second] - arr[first];

            if (absoluteDifference == 0)
                absoluteDifference = currDiff;
            else
                if (currDiff != 0 && currDiff < absoluteDifference)
                    absoluteDifference = currDiff;
        }

    cout << absoluteDifference << endl;

    return 0;
}