// Move all negative numbers to one side of an array


/* Algorithm:
1. Select a element from arrray and compare to ith element
2. When ith and selected index are not same then swap the value
3. Print the resultant array
*/

#include <bits/stdc++.h>
using namespace std;

void MoveZeroToOneSide(vector<int>&arr, int n){

	int j = 0;
	for(int i=0; i<n; i++){

		if(arr[i] < 0){
			if(i != j){
				swap(arr[i], arr[j]);
			}
			j++;
		}
	}

	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}


/* Algorithm 2:
1. Take two pointers left and right and compare the numbers
2. Check If the left and right pointer elements are negative then simply increment the left pointer.
3. Otherwise, if the left element is positive and the right element is negative then simply swap the elements, and simultaneously increment and decrement the left and right pointers.
4. Else if the left element is positive and the right element is also positive then simply decrement the right pointer.
5. Repeat the above 3 steps until the left pointer ≤ right pointer.

*/

void MoveZeroToOneSide2(vector<int>&arr, int n){

	int left = 0, right = n-1;

	while(left <= right){

		if(arr[left] < 0 && arr[right] < 0){ // if left and right is less than 0
			left+=1;
		}
		else if(arr[left] > 0 && arr[right] < 0){ // if left element is greater than zero and right is negative
			swap(arr[left], arr[right]); // swap the values
			left += 1;
			right += 1;
		} 
		else if(arr[left] > 0 && arr[right] > 0){ // when both left and right elements are positive
			right-=1; // decreament right 
		}
		else {
			left+=1;
			right-=1;
		}
	}

	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << "\n";
}



int main() {
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int n;
	    cin >> n;
	    
	    std::vector<int>arr(n) ;
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    
	   MoveZeroToOneSide2(arr, n);
	    
	    return 0;
	    
	}
}