// Reverse a given string

/* Algorithm:
1. Use two pointers high and low
2. swap the elements from start with last element 
3. Until we reach middle element
*/

#include <bits/stdc++.h>
using namespace std;

string ReverseWord(string s, int n){

	int low = 0, high = n-1;

	while(low < high){
		swap(s[low], s[high]);
		low++;
		high--;
	}

	return s;
}

int main(){

	int testcase;
	cin >> testcase;

	while(testcase--){
		int size;
		cin >> size;

		string s;
		cin >> s;

		string reverse = ReverseWord(s, size);

		cout << reverse << endl;
	}
}
