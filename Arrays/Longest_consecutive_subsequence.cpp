// Longest consecutive subsequence 

#include<bits/stdc++.h>
using namespace std;

/*
Algorithm: TC - O(nlogn) , SC - O(1)
1. Sort the array in increasing order
2. Remove the dupicates from the given array
3. Traverse the new array
4. Check if the current element is just greater than previous element by 1
5. If above conditon is satisfied then increament count by one
6. At the end return the count
*/

int LongestConsecutiveSubsequence(vector<int>&arr, int n){

	int ans = 0, count = 0;

	sort(arr.begin(), arr.end());

	vector<int> v;

	v.push_back(arr[0]);
	for(int i=1; i<n; i++){

		if(arr[i] != arr[i-1]){
			v.push_back(arr[i]);
		}
	}

	for(int i=0; i < v.size(); i++){

		if(i > 0 && v[i] == v[i-1] + 1){
			count++;
		}
		else {
			count = 1;
		}

		ans = max(ans, count);
	}

	return ans;
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
	    
	   int ans = LongestConsecutiveSubsequence(arr, n);

	   cout << ans << endl;
	    
	    return 0;
	    
	}
}