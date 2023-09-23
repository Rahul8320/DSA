#include<bits/stdc++.h>
using namespace std;

/*
	TC: O(N + N) [if sorted to return result O(N + NLogN)]
	SC: O(N) [if consider result array] or O(1)
*/
vector<int> solve(int arr[], int n){
	int maximum = INT_MIN;
	vector<int> ans;
	for (int i = n-1; i >= 0; --i)
	{
		if(arr[i] > maximum){
			ans.push_back(arr[i]);
		}
		// keep track of write maximum
		maximum = max(maximum, arr[i]);
	}

	reverse(ans.begin(), ans.end());
	return ans;
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

	vector<int> res = solve(arr, n);
	for(auto it:res){
		cout << it << " ";
	}
	cout << endl;
	
	return 0;
}