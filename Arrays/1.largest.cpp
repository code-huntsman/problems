//keep moving forward.
// #1. Largest Element in the Array.
#include <bits/stdc++.h>
using namespace std;

// Optimal Solution.
int solve(int n, vector<int>& arr) {
	int largest = arr[0];

	for(int i=0; i<n; i++) {
		if(arr[i] > largest)
			largest = arr[i];
	}
	return largest;
}

int main() {
	int n;
	cin >> n;

	vector<int> arr(n);

	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}	

	cout << "Largest Element in the Array: " << solve(n, arr);
	return 0;
}