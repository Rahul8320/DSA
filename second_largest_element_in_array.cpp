#include<bits/stdc++.h>

using namespace std;

/*
  Optimal Solution
  Time Complexity: O(n)
  Space Complexity: O(1)
*/
int secondLargest(int arr[], int n) {
	int largest = arr[0];
	int secondLargest = INT_MIN;
	for (int i = 1; i < n; i++) {
		if (arr[i] > largest) {
			secondLargest = largest;
			largest = arr[i];
		} else if (arr[i] < largest && arr[i] > secondLargest) {
			secondLargest = arr[i];
		}
	}
	return secondLargest;
}

int secondSmallest(int arr[], int n) {
	int smallest = arr[0];
	int secondSmallest = INT_MAX;
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < smallest) {
			secondSmallest = smallest;
			smallest = arr[i];
		} else if (arr[i] != smallest && arr[i] < secondSmallest) {
			secondSmallest = arr[i];
		}
	}
	return secondSmallest;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << secondLargest(arr, n) << endl;
	cout << secondSmallest(arr, n) << endl;

	return 0;
}