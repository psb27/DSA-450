//  Search in Rotated Sorted Array

#include<bits/stdc++.h>
using namespace std;

int getPivot(vector<int>&arr, int n) {

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

int binarySearch(vector<int>& arr, int start, int end, int target) {

	while (start < end) {

		int mid = start + (end - start) / 2;

		if (arr[mid] == target)
			return mid;

		else if (arr[mid] > target)
			end = mid - 1;

		else
			start = mid + 1;
	}

	return -1;
}

int SearchInRotatedSortedArray(vector<int> &arr, int n, int target) {

	int pivot = getPivot(arr, n);

	if (target >= arr[pivot] && target <= arr[n - 1]) {

		return binarySearch(arr, pivot, n - 1, target);
	}
	else {

		return binarySearch(arr, 0, pivot - 1, target);
	}


}


int main()
{

	int testcases;
	while (testcases--) {

		int n;
		cin >> n;

		std::vector<int> arr(n);

		for (int i = 0; i < n; i++)
			cin >> arr[i];

		int target; cin >> target;

		int ans = SearchInRotatedSortedArray(arr, n, target);

		cout << ans << "\n";
	}
	return 0;
}