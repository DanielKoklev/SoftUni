#include <iostream>
using namespace std;

const unsigned maxSize = 200;

bool getArray(int arr[], unsigned& arrSize) {
	cin >> arrSize;

	if (arrSize > maxSize) {
		return false;
	}

	for (int i = 0; i < arrSize; i++) {
		cin >> arr[i];
	}
	return true;
}


int main() {
	unsigned arrSize;
	int arr[maxSize];

	getArray(arr, arrSize);

	int arrSum = 0;
	for (int i = 0; i < arrSize; i++) {
		arrSum += arr[i];
	}

	int averageNum = arrSum / arrSize;

	for (int i = 0; i < arrSize; i++) {
		if (arr[i] >= averageNum) {
			cout << arr[i] << " ";
		}
	}
	cout << endl;

	return 0;
}