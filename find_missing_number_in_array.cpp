#include<bits/stdc++.h>
using namespace std;

/*
	----Brute Force Approach----
	TC: O(N*N)
	SC: O(1)
*/
int missingNumber(int arr[], int n) {
	for (int i = 1; i <= n; ++i)
	{
		bool flag = false;
		for (int j = 0; j < n - 1; ++j)
		{
			if (arr[j] == i) {
				flag = true;
				break;
			}
		}
		if (flag == false) {
			return i;
		}
	}
}

/*
	++++ Better Approach ++++
	TC: O(N) + O(N)
	SC: O(N)
*/
int missingNumberBetter(int arr[], int n) {
	int hash[n + 1] = {0};
	for (int i = 0; i < n - 1; ++i)
	{
		hash[arr[i]] = 1;
	}
	for (int i = 1; i <= n; ++i)
	{
		if (hash[i] == 0) {
			return i;
		}
	}
}

/*
	==== Optimal Approach ====
	TC: O(N)
	SC: O(1)
*/
int missingNumberOptimal(int arr[], int n) {
	int totalSum = (n * (n + 1)) / 2;
	for (int i = 0; i < n - 1; ++i)
	{
		totalSum -= arr[i];
	}
	return totalSum;
}

int missingNumberXor(int arr[], int n) {
	int xor1 = 0;
	int xor2 = 0;
	for (int i = 1; i < n; i++) {
		xor1 = xor1 ^ i;
		xor2 = xor2 ^ arr[i - 1];
	}
	xor1 = xor1 ^ n;
	return xor2 ^ xor1;
}

int main() {
	int n;
	cin >> n;
	int arr[n - 1];
	for (int i = 0; i < n - 1; ++i)
	{
		cin >> arr[i];
	}

	// cout << missingNumber(arr, n) << endl;
	// cout << missingNumberBetter(arr, n) << endl;
	cout << missingNumberOptimal(arr, n) << endl;
	cout << missingNumberXor(arr, n) << endl;
	return 0;
}