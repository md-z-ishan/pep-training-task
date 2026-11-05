// Sort the array and find the second largest distinct element.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cout << "Enter the size of the array: ";
	cin >> n;

	int arr[n];
	cout << "Enter the elements: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	int largest = arr[n - 1];
	bool found = false;
	int secondLargest = 0;

	for (int i = n - 2; i >= 0; i--) {
		if (arr[i] != largest) {
			secondLargest = arr[i];
			found = true;
			break;
		}
	}

	if (found) {
		cout << "Second largest distinct element: " << secondLargest << endl;
	} else {
		cout << "There is no second largest distinct element." << endl;
	}

	return 0;
}
