// Merge Without Extra Space 


/* Algorithm:
1. Traverse first array and compare it with first element of second array
2. If second array first element is smaller than first array element then swap them
3. Since it given in the question that both arrays are sorted then we sort the second array
4. Output the answer
*/

#include <bits/stdc++.h>
using namespace std;

void MergeTwoSortedArray(int arr1[], int n, int arr2[], int m)
{
 	
 	int i = 0; // initializing i pointer
 	while(arr1[n-1] > arr2[0]){ // running while last element of element of first
 										// becomes smaller than second array first element
 		
 		if(arr1[i] > arr2[0]){ // if we find greater element than first element of second array
 			swap(arr1[i], arr2[0]); // swaping smaller value of second array to larger value of first array
 			sort(arr2, arr2+m); // both array are sorted so sorting second array
 		}
 		i++;
 	}


}

// Optimal Approach - Gap method

int nextGap(int gap){
        
    if(gap <=1){
        return 0;
    }
        
    return (gap/2) + (gap%2); //ceiling of gap/2
}

/*void MergeTwoSortedArray2(int arr1[], int n, int arr2[], int m)
{
 	
	int i, j, gap = n + m;
	for (gap = nextGap(gap);
		gap > 0; gap = nextGap(gap))
	{
		// comparing elements in the first array.
		for (i = 0; i + gap < n; i++)
			if (arr1[i] > arr1[i + gap])
				swap(arr1[i], arr1[i + gap]);

		// comparing elements in both arrays.
		for (j = gap > n ? gap - n : 0;
			i < n && j < m;
			i++, j++)
			if (arr1[i] > arr2[j])
				swap(arr1[i], arr2[j]);

		if (j < m) {
			// comparing elements in the second array.
			for (j = 0; j + gap < m; j++)
				if (arr2[j] > arr2[j + gap])
					swap(arr2[j], arr2[j + gap]);
		}
	}

}
*/




int main() {
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int n, m;
	    cin >> n >> m;
	    
	    int arr1[n];
	    for(int i=0; i<n; i++){
	        cin >> arr1[i];
	    }

	    int arr2[m];
	    for(int i=0; i<m; i++){
	        cin >> arr2[i];
	    }
	    
	    MergeTwoSortedArray(arr1, n, arr2, m);
	   // MergeTwoSortedArray2(arr1, n, arr2, m);
	    
	   return 0;
	    
	}
}