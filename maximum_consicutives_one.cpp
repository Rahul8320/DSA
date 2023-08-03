#include<bits/stdc++.h>
using namespace std;

/*
	==== Optimal Approach ====
	TC: O(N)
	SC: O(1)
*/
int maximumConsicutives(int arr[], int n) {
	int maxi = 0;
	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == 1) {
			cnt++;
			maxi = max(maxi, cnt);
		} else {
			cnt = 0;
		}
	}
	return maxi;
}


int main() {
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << maximumConsicutives(arr, n) << endl;

	return 0;
}