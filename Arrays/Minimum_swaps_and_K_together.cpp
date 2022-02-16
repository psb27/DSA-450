// Minimum swaps and K together

/*
Algorithm:
1. Find count of all elements which are less than or equals to ‘k’. Let’s say the count is ‘cnt’
2. Using two pointer technique for window of length ‘cnt’, each time keep track of how many elements in this range are greater than ‘k’. Let’s say the total count is ‘bad’.
3. Repeat step 2, for every window of length ‘cnt’ and take minimum of count ‘bad’ among them. This will be the final answer.

*/

#include<bits/stdc++.h>
using namespace std;

int MinimumSwaps(int *arr, int n, int k) {

	int count = 0;

	for (int i = 0; i < n; i++) {

		if (arr[i] <= k)
			count++;
	}

	int bad = 0;

	for (int i = 0; i < count; i++) {

		if (arr[i] > k)
			bad++;
	}

	int i = 0, j = count; int ans = bad;

	while (j < n) {

		if (arr[i] > k)
			bad--;

		if (arr[j] > k)
			bad++;

		ans = min(ans, bad);

		i++;
		j++;
	}

	return ans;
}


int main() {

	int testcase;
	cin >> testcase;
	while (testcase--) {

		int n; cin >> n;
		int arr[n];

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		int k; cin >> k;

		int ans = MinimumSwaps(arr, n , k);

		cout << ans << "\n";
	}

	return 0;
}