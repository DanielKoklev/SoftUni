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

void printArray(int arr[], unsigned arrSize) {
	for (int i = 0; i < arrSize; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
}

int main() {
	unsigned arrSize;
	int arr[maxSize];

	if (getArray(arr, arrSize) == false) {
		return -1;
	}
	int maxLength = 0;
	int longestNumber = 0;

	int currLength = 1;
	int curNumber = arr[0];

	for (int i = 1; i < arrSize; i++) {
		if (arr[i] == curNumber) {
			currLength++;
		}
		else {
			if (currLength >= maxLength) {
				maxLength = currLength;
				longestNumber = curNumber;
			}
			currLength = 1;
			curNumber = arr[i];
		}
	}
	if (currLength >= maxLength) {
		maxLength = currLength;
		longestNumber = curNumber;
	}

	for (int i = 0; i < maxLength; i++) {
		cout << longestNumber << " ";
	}
	cout << endl;


	return 0;
}