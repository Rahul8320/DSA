#include<bits/stdc++.h>

using namespace std;

/*
	----- Brute Force -----
	Time Complexity: O(N+D)
	Space Complexity: O(D)
*/
void leftRotate(int arr[], int n, int d) {
	d = d % n;
	int temp[d];
	// 1st step -> copy first d element to temp
	for (int i = 0; i < d; i++) {
		temp[i] = arr[i];
	}
	// 2nd step -> shift next all element to first part
	for (int i = d; i < n; i++) {
		arr[i - d] = arr[i];
	}
	// 3rd step -> fill last part element from temp array
	for (int i = n - d; i < n ; ++i)
	{
		arr[i] = temp[i - (n - d)];
	}
}

/*
	---- Optimal Solution ----
	Time Complexity: O(2N)
	Space Complexity: O(1)
*/

void leftRotateByK(int arr[], int n, int d) {
	reverse(arr, arr + d);
	reverse(arr + d, arr + n);
	reverse(arr, arr + n);
}

int main() {
	int n;
	cin >> n;
	int d;
	cin >> d;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	leftRotateByK(arr, n, d);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}