#include<bits/stdc++.h>

using namespace std;

// check for sorted array
bool isSortedArray(int arr[], int n) {
	bool flag = true;
	for (int i = 1; i < n; ++i)
	{
		if (arr[i - 1] > arr[i]) {
			flag = false;
			break;
		}
	}
	return flag;
}

// check for sorted and rotated array
bool isSortedAndRotated(int arr[], int n) {
	int count = 0;
	for (int i = 1; i < n; ++i)
	{
		if (arr[i - 1] > arr[i]) {
			count++;
		}
	}

	if (arr[n - 1] > arr[0]) {
		count++;
	}

	return count <= 1;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << isSortedAndRotated(arr, n) << endl;

	return 0;
}