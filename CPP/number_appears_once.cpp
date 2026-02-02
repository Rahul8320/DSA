#include<bits/stdc++.h>

using namespace std;

/*
	Using two array for looping and finding occarance of number
	---- Burte Force Approach ----
	TC: O(N*N)
	SC: O(1)
*/
int numberAppearsOnce(int arr[], int n) {
	for (int i = 0; i < n; ++i)
	{
		int num = arr[i];
		int cnt = 0;
		for (int j = 0; j < n; ++j)
		{
			if (arr[j] == num) cnt++;
		}
		if (cnt == 1) {
			return num;
		}
	}
}

/*
	Using hash like unordered_map
	++++ Better Approach ++++
	TC: O(N) + O(N) // For orderd map: O(NlogM) -> M = Size of Map
	SC: O(M) -> M = Size of Map
*/
int numberAppearsOnceBetter(int arr[], int n) {
	unordered_map<int, int> mp;
	for (int i = 0; i < n; ++i)
	{
		mp[arr[i]]++;
	}
	for (auto it : mp) {
		if (it.second == 1) {
			return it.first;
		}
	}
}

/*
	Using XOR Operation
	==== Optimal Approach ====
	TC: O(N)
	SC: O(1)
*/
int numberAppearsOnceXor(int arr[], int n) {
	int xorNum = 0;
	for (int i = 0; i < n; ++i)
	{
		xorNum = xorNum ^ arr[i];
	}
	return xorNum;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	cout << numberAppearsOnce(arr, n) << endl;
	cout << numberAppearsOnceBetter(arr, n) << endl;
	cout << numberAppearsOnceXor(arr, n) << endl;

	return 0;
}