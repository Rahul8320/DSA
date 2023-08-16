#include<bits/stdc++.h>

using namespace std;

/*
	----- Brute Force Approach
	TC: O(n^2)
	SC: O(1)
*/
int longestSubarray(int arr[], int n, int k) {
	int maxLength = 0;
	for (int i = 0; i < n; ++i)
	{
		int sum = 0;
		for (int j = i; j < n; j++) {
			sum += arr[j];
			if (sum == k) {
				maxLength = max(maxLength, (j - i + 1));
			}
		}
	}
	return maxLength;
}

/*
	++++ Better Approach for only Positive and Zeros numbers and Optimal Approach for Zeros and Negative numbers ++++
	TC: O(N*logN)
	SC: O(N)
*/
int longestSubarrayBetter(int arr[], int n, int k) {
	map<int, int> preSumMap;
	int sum = 0;
	int maxLength = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
		if (sum == k) {
			maxLength = max(maxLength, i + 1);
		}
		int rem = sum - k;
		if (preSumMap.find(rem) != preSumMap.end()) {
			int len = i - preSumMap[rem];
			maxLength = max(maxLength, len);
		}
		if (preSumMap.find(sum) == preSumMap.end()) {
			preSumMap[sum] = i;
		}
	}
	return maxLength;
}

/*
	==== Optimal Approach: Two Pointer Approach
	TC: O(2N)
	SC: O(1)
*/
int longestSubarrayOptiaml(int arr[], int n, int k) {
	int left = 0, right = 0;
	int sum = arr[0];
	int maxLength = 0;
	while (right < n) {
		while (left <= right && sum > k) {
			sum -= arr[left];
			left++;
		}
		if (sum == k) {
			maxLength = max(maxLength, right - left + 1);
		}
		right++;
		if (right < n) {
			sum += arr[right];
		}
	}
	return maxLength;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int sum;
	cin >> sum;

	cout << longestSubarray(arr, n, sum) << endl;
	cout << longestSubarrayBetter(arr, n, sum) << endl;
	cout << longestSubarrayOptiaml(arr, n, sum) << endl;

	return 0;
}