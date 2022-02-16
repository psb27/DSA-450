// Best Time to Buy and Sell Stock

/* Algorithm:
1. We take two variables maximum_profit and minimum_price 
2. Traverse the arry and store minimum price to min_price variable
   and maximum profit we can gain in max_profit variable
3. Find the difference betwwn maximum value and 
   minimum price and store it in max profit variable
4. Return th maximum profit 
*/

#include <bits/stdc++.h>
using namespace std;

int BestTimeToBuyAndSellStock(vector<int> &arr, int n){

	int max_profit = 0;
	int min_price = INT_MAX;

	for(int =0; i<n; i++){
		min_price = min(min_price, arr[i]);
		max_profit = max(max_profit, arr[i] - min_price);
	}

	return max_profit;
	

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
	    
	   int ans = BestTimeToBuyAndSellStock(arr, n);

	   cout << ans << endl;
	    
	    return 0;
	    
	}
}