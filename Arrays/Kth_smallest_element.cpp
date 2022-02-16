// Kth smallest elements in an array 

/* Algorithm:
1. Since it given array elements are distinct we use set to store all elements in sorted order
2. Declare an iterator and use STL advance function which directly jumps to given position
3. Return the value present at current iterator position
*/

#include <bits/stdc++.h>
using namespace std;

int KthSmallestElement(vector<int>&arr, int n, int k){

    set<int>st; // creating set to store array elements

    for(auto x: arr){
    	st.insert(x);
    }

    set<int> :: iterator itr = st.begin(); // iterator pointint to first element

    advance(itr, k-1);

    return *itr;
    
        
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

	    int k;
	    cin >> k;

	    int ans = KthSmallestElement(arr, n, k);

	    cout << ans << endl;
	    
	   
	    
	    return 0;
	    
	}
}