#include<bits/stdc++.h>

using namespace std;

/*
----- Brute Force Approach ------
	Sort the array using quick sort and return arr[n-1] element
	Time Complexity: O(nLogn)
	Space Complexity: O(1)
*/

/*
----- Optimal Approach ----
   Time Complexity: O(n)
   Space Complexity: O(1)
*/

int largestInArray(int arr[], int n) {
	int largest = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > largest) {
			largest = arr[i];
		}
	}
	return largest;
}

int smallestInArray(int arr[], int n) {
	int smallest = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] < smallest) {
			smallest = arr[i];
		}
	}
	return smallest;
}


int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << largestInArray(arr, n) << endl;
	cout << smallestInArray(arr, n) << endl;

	return 0;
}