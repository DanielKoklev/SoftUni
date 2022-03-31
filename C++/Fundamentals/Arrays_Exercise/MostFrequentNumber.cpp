#include <iostream>
using namespace std;

const unsigned maxSize = 200;

bool getArray(int arr[], unsigned & arrSize) {

	cin >> arrSize;

	if (arrSize > maxSize) {
		return false;
	}

	for (int i = 0; i < arrSize; i++) {
		cin >> arr[i];
	}
	return true;
}


int main(void) {
	unsigned arrSize;
	int arr[maxSize];

	getArray(arr, arrSize);

	unsigned counts[10] = {};

	for (int i = 0; i < arrSize; i++) {
		counts[arr[i]]++;
	}

	unsigned maxCount = 0;

	for (int i = 0; i < 10; i++) {
		if (counts[i] > maxCount) {
			maxCount = counts[i];
		}
	}

	for (int i = 0; i < 10; i++) {
		if (counts[i] == maxCount) {
			cout << i << " ";
		}
	}

	return 0;
}