// Trapping Rain Water


/* Algorithm:
1. 
2. 
3. 
4. 
*/

#include <bits/stdc++.h>
using namespace std;

int TrappingRainWater(int arr[], int n)
{
 	int left = 0, right = n-1; // using left and right pointers
 	int leftmax = 0, rightmax = 0; // to store the leftmax and right max value of the building
 	int res = 0; // to store the water trapped at eery index

 	while(left <= right){

 		if(arr[left] <= arr[right]){

 			if(arr[left] > leftmax){
 				leftmax = arr[left];
 			}
 			else {
 				res += leftmax - arr[left];
 			}

 			left++;
 		}
 		else {

 			if(arr[right] >= rightmax){
 				rightmax = arr[right];
 			}
 			else {
 				res += rightmax - arr[right]; 
 			}

 			right--;
 		}
 	}

 	return res;
}

int main() {
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int n;
	    cin >> n;
	    
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }	    
	    
	    int ans = TrappingRainWater(arr, n);

	    cout << ans << "\n";

	   return 0;
	    
	}
}