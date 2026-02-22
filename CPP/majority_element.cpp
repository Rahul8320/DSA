#include<bits/stdc++.h>

using namespace std;

/*
	++++ Better Approach ++++
	TC: O(NlogN)
	SC: O(N)
*/
int majorityElementUsingHashing(int arr[], int n) {
	map<int, int> hashMap;
	for (int i = 0; i < n; ++i)
	{
		hashMap[arr[i]]++;
	}

	for (auto it : hashMap) {
		if (it.second > (n / 2)) {
			return it.first;
		}
	}
	return -1;
}


/*
	==== Optimal Approach ==== [Moore's Voting Algorithm]
	TC: O(N) + O(N) // if says thair always a majority element than O(N)
	SC: O(1)
*/
int majorityElementOptimal(int arr[], int n) {
	int el;
	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		if (cnt == 0) {
			el = arr[i];
			cnt = 1;
		} else if (arr[i] == el) {
			cnt++;
		} else {
			cnt--;
		}
	}

	// this is only required if their may or may not majority element
	int temp = 0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == el) temp++;
	}
	if (temp > (n / 2)) return el;
	return -1;
}

int main() {
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << majorityElementUsingHashing(arr, n) << endl;

	cout << majorityElementOptimal(arr, n) << endl;

	return 0;
}