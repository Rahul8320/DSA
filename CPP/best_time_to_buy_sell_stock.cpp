#include<bits/stdc++.h>
using namespace std;

/*
	==== Best Approach ====
	TC: O(n)
	SC: O(1)
*/
int solve(int arr[], int n){
	int mini = arr[0];
	int maxProfit = 0;

	for (int i = 1; i < n; ++i)
	{
		int cost = arr[i] - mini;
		maxProfit = max(maxProfit, cost);
		mini = min(mini, arr[i]);
	}

	return maxProfit;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("outputf.out","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << solve(arr, n) << endl;
	
	return 0;
}