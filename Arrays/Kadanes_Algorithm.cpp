// Find the contiguous sub-array(containing at least one number)
//which has the maximum sum and return its sum.

/* Algorithm:
1. Traverse an array and every element to current_sum variable
2. Check for the maximum current sum value by comparing with variable max_sum
3. If current_sum becomes negative then assign it to zero
*/

#include <bits/stdc++.h>
using namespace std;

int MaxSubArraySum(vector<int>&arr, int n){

    int max_sum = INT_MIN, current_sum = 0;
    for(int i=0; i<n; i++){
    	current_sum += arr[i];

    	max_sum = max(max_sum, current_sum);

    	if(current_sum < 0){
    		current_sum = 0;
    	}
    }

    return max_sum;
        
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

	    int ans = MaxSubArraySum(arr, n);

	    cout << ans << endl;
	    
	   
	    
	    return 0;
	    
	}
}