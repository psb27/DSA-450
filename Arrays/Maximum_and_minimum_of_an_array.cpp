// Maximum and minimum of an array

/* Algorithm:
1. Taking two variable min_element and max_element
2. Comparing with each element in the array for min and max
3. Storing the final result in variable and returning answer
*/

#include <bits/stdc++.h>
using namespace std;

pair<int,int>MinMaXElement(vector<int>&arr, int n){
    
    int max_element = INT_MIN, min_element = INT_MAX;
    
    pair<int,int>result;
    
    for(int i=0; i<n; i++){
        if(arr[i] > max_element){
            max_element = arr[i];
        }
        
        max_element = max(max_element, arr[i]);
        
        if(arr[i] < min_element){
            min_element = arr[i];
        }
        
        min_element = min(min_element, arr[i]);
    }
    
    result.first = min_element;
    result.second = max_element;
    
    return result;
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
	    
	    pair<int,int>ans = MinMaXElement(arr, n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	    return 0;
	    
	}
}