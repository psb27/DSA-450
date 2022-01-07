// Union of two arrays 

// Sort an array of 0s, 1s and 2s 

/* Algorithm:
1. Use set to store array elements
2. Because set stores only unique elements
3. return the size of set
*/

#include <bits/stdc++.h>
using namespace std;

int UnionOfTwoArrays(vector<int>&a, int n, vector<int>&b, int m)
{
   // Using set to store all the elements of an array
	set<int>st;

	for(int i=0; i<n; i++) {
		st.insert(a[i]);
	}

	for(int j = 0; j<m; j++){
		st.insert(b[j]);
	}

	int ans = st.size();

	return ans;
        
}

int main() {
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int n, m;
	    cin >> n >> m;
	    
	    std::vector<int>a(n);
	    std::vector<int>b(m);
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	    }

	    for(int i=0; i<m; i++){
	        cin >> b[i];
	    }
	    
	   int s = UnionOfTwoArrays(a, n, b, m);

	   cout << s << endl;
	    
	   return 0;
	    
	}
}