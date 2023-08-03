#include<bits/stdc++.h>

using namespace std;

/*
    Brute Force Approach
    Time Complexity: O(NlogN + N)
    Space Complexity: O(N)
*/
int removeDuplicate(int arr[], int n) {
	set<int> st;
	for (int i = 0; i < n; ++i) // --> O(NlogN)
	{
		st.insert(arr[i]);
	}

	int index = 0;
	for (auto it : st) {  // --> O(N)
		arr[index] = it;
		index++;
	}

	return index;
}

/*
	Optimal Approach -> Two Pointer Approach
	Time Complexity: O(N)
	Space Complexity: O(1)
*/

int removeDuplicate2(int arr[], int n) {
	int index = 0;
	for (int i = 1; i < n; i++) {
		if (arr[index] != arr[i]) {
			arr[index + 1] = arr[i];
			index++;
		}
	}
	return (index + 1);
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << removeDuplicate2(arr, n) << endl;

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}