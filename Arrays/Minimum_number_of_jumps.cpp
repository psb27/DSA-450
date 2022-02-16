// Minimum number of jumps to teach end of an array

/* Algorithm:
1. We take three variables maxReach, steps and jumps 
2. First we check that if we reached end of the array then return jump value;
3. Next we update maxReach. This is equal to  maximum of maxRach and i+arr[i]
4.We used step variable to get current index, so step has to be decreased
5. If no more steps are remaining 
  (i.e. steps=0, then we must have used a jump. 
  Therefore increase jump. Since we know that it is possible somehow 
  to reach maxReach, we again initialize the steps to the number of 
  steps to reach maxReach from position i. But before re-initializing 
  step, we also check whether a step is becoming zero or negative. 
  In this case, It is not possible to reach further. 
*/

#include <bits/stdc++.h>
using namespace std;

int MinimumnimberOfJumps(vector<int> &arr, int n){

	if(n <= 0){
		return 0;
	}

	if(arr[0] == 0){
		return -1;
	}

	int max_reach = arr[0]; // to store maximum reachable index
	int steps = arr[0]; // to store steps taken in one jump and store cuurent index
	int jump = 1; // store the number of jumps to reach maximal position

	int i=1;
	for(i=1; i<n; i++){

		if(i == n-1){ // if we reached end of an array
			return jump;
		}

		// updating max_reach
		max_reach = max(max_reach, i+arr[i]);

		// we use step to get current index
		steps--;

		// we reached maximum reachable steps
		if(steps == 0){
			jump++; // updating jumps

			// check if currentb is maximum reach point from previous index
			if(i >= max_reach){
				return -1;
			}

			//re-initialize the steps to the amount
            // of steps to reach maxReach from position i.
			steps = max_reach - i;
		}
	}

	return -1;

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
	    
	   int ans = MinimumnimberOfJumps(arr, n);

	   cout << ans << endl;
	    
	    return 0;
	    
	}
}