#include<bits/stdc++.h>

using namespace std;

/*
	++++ Optimal Approach: using hashing
	TC: O(NlogN)
	SC: O(N)
*/
vector<int> twoSumOptimal(int arr[], int target, int size) {
	map<int, int> hashMap;
	for (int i = 0; i < size; ++i)
	{
		int one = arr[i];
		int two = target - one;
		if (hashMap.find(two) != hashMap.end()) {
			return {hashMap[two], i};
		}
		hashMap[one] = i;
	}
	return {};
}

/*
	==== Without using hashing ===
	TC: O(N) + O(NlogN)
	SC: O(1) or O(N) [taking sorting array space]
*/
string twoSumOptimal2(int arr[], int target, int n) {
	int left = 0, right = n - 1;
	sort(arr, arr + n);
	while (left < right) {
		int sum = arr[left] + arr[right];
		if (sum == target) {
			return "YES";
		}
		if (sum < target) left++;
		else right--;
	}
	return "NO";
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int target;
	cin >> target;
	vector<int> result = twoSumOptimal(arr, target, n);
	for (auto it : result) {
		cout << it << " ";
	}
	cout << endl;

	cout << twoSumOptimal2(arr, target, n) << endl;

	return 0;
}