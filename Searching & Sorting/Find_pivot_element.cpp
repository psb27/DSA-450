// Find pivot element from sorted rotated array

#include<bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int n) {

	int start = 0, end = n - 1;

	while (start < end) {

		int mid = start + (end - start) / 2;

		if (arr[mid] >= arr[0]) {

			start = mid + 1 ;
		}
		else {

			end = mid;
		}
	}

	return start;
}

int main() {

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int pivot_element = getPivot(arr, n);

	cout << pivot_element << "\n";

	return 0;
}