#include<bits/stdc++.h>

using namespace std;

/*
	++++ Better Approach ++++
	TC: O(N*N)
	SC: O(1)
*/
int maximumSubarraySum(int arr[], int n) {
	int maxSum = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		int sum = 0;
		for (int j = i; j < n; ++j)
		{
			sum += arr[j];
			maxSum = max(maxSum, sum);
		}
	}
	return maxSum;
}

/*
	==== Optimal Approach ====
	TC: O(N)
	SC: O(1)
*/
int maximumSubarraySumOptimal(int arr[], int n) {
	int maxSum = INT_MIN;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
		if (sum < 0)
			sum = 0;
		else
			maxSum = max(maxSum, sum);
	}
	return maxSum;
}

void printMaximumSubarraySum(int arr[], int n) {
	int maxSum = INT_MIN;
	int ansStart = -1;
	int ansEnd = -1;
	int sum = 0;
	int start = -1;
	for (int i = 0; i < n; ++i)
	{
		if (sum == 0) start = i;

		sum += arr[i];

		if (sum > maxSum) {
			maxSum = sum;
			ansStart = start;
			ansEnd = i;
		}
		if (sum < 0)
			sum = 0;
	}

	cout << ansStart << " " << ansEnd << endl;

	for (int i = ansStart; i <= ansEnd; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << maximumSubarraySum(arr, n) << endl;
	cout << maximumSubarraySumOptimal(arr, n) << endl;
	printMaximumSubarraySum(arr, n);

	return 0;
}