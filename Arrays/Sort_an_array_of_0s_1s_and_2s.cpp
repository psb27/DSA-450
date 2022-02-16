// Sort an array of 0s, 1s and 2s 

/* Algorithm:
1. Count number of 0s, 1s, and 2s
2. Traverse the arrray and assign value of count to the respective value of 0s, 1s and 2s
3. Storing the final sorted array as answer
*/

#include <bits/stdc++.h>
using namespace std;

void Sort012(vector<int>&arr, int n)
{
    // coode here 
    int count_one = 0, count_two = 0, count_zero = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            count_zero++;
        }
        else if(arr[i] == 1){
            count_one++;
        }
        else {
            count_two++;
        }
    }

	for(int i=0; i<count_zero; i++){
	    arr[i] = 0;
	 }
	    
    for(int j=count_zero; j<count_one+count_zero; j++){
        arr[j] = 1;
    }
    
    for(int k=count_one+count_zero; k<n; k++){
        arr[k] = 2;
    }

    for(int i=0; i<n; i++){
    	cout << arr[i] << " ";
    }
    cout << "\n";
        
}


// Optimised Approach

/* Algorithm:
1. Use three pointer low, mid and high. low and mid pointing to start and high to end of an array
2. if arr[mid] == 1 and arr[low] == 0 then swap(arr[mid], arr[low]) then low++, mid++
3. if arr[mid] == 0 and arr[low] == 0 then low++, mid++
4. If arr[mid] == 2 arr[high] == 0/1 swap(arr[mid], arr[high]) then high--
*/

void SortZeroOneTwo(vector<int>&arr, int n){

	int low = 0, mid = 0, high = n-1;

	while(mid <= high){
		switch(arr[mid]){
			case 0: // if mid equal to zero
				swap(arr[low++], arr[mid++]);
				break;

			case 1:
				mid++;
				break;

			case 2:
				swap(arr[mid], arr[high--]);
				break;
		}
	}

	for(auto x: arr){
		cout << x << " ";
	}
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
	    
	   //Sort012(arr, n);
	   SortZeroOneTwo(arr, n);
	    
	    return 0;
	    
	}
}