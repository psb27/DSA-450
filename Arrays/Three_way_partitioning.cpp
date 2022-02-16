// Three way partitioning

// This question can be solved using Dutch National Flag Algorithm

/*
Algorithm:
1. Take three pointers start,  mid , end to partition the given array
2. loVal should be between start and mid and high should be between mid and end
3. Traverse the array and arr[mid] is less than lowVal
4. Then check if the mid and start is same then don't swap other wise swap the elements
5. And also check if the element at mid is greater than end if yes then swap
6. At the end increment mid pointer 

*/

#include<bits/stdc++.h>
using namespace std;


void ThreeWayPartioning(int arr[], int n, int lowVal, int highVal){

	int l = 0, r = n-1;

	for(int i=0; i<=r; i++){

		if(arr[i] < lowVal){

			swap(arr[i], arr[l]);
			l++;

		}
		else if(arr[i] > highVal){

			swap(arr[i], arr[r]);
			r--;
			i--;

		}
	}

	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main(){

	int testcase;
	cin >> testcase;

	while(testcase--){

		int n; 
		cin >> n;

		int arr[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}

		int a, b;
		cin >> a >> b;

		ThreeWayPartioning(arr, n, a, b);
	}
	return 0;
}