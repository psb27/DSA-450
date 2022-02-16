// First and last occurrences of x

/*
Algorithm
*/

#include<bits/stdc++.h>
using namespace std;

int FirstOccurenceOfK(vector<int>&arr, int n, int k){

	int start = 0, end = n-1;

	int mid = start + (end-start)/2;

	int index = -1;

	while(start <= end){

		if(arr[mid] == k){
			index = mid;
			end = mid-1;
		}
		else if(arr[mid] < k){
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}

		mid = start + (end-start)/2;
	}


	return index;
}

int LastOccurenceOfK(vector<int>&arr, int n, int k){

	int start = 0, end = n-1;

	int mid = start + (end-start)/2;

	int index = -1;

	while(start <= end){

		if(arr[mid] == k){
			index = mid;
			start = mid+1;
		}
		else if(arr[mid] < k){
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}

		mid = start + (end-start)/2;
	}

	return index;
}

int main(int argc, char const *argv[])
{
	
	int testcases;
	cin >> testcases;

	while(testcases--){

		int n, k; cin >> n >> k;

		vector<int>arr(n);

		for(int i=0; i<n; i++){
			cin >> arr[i];
		}

		vector<int>ans(2);
		ans[0] = FirstOccurenceOfK(arr, n, k);
		ans[1] = LastOccurenceOfK(arr, n, k);

		cout << ans[0] << " " << ans[1] << endl;

	}
	return 0;
}