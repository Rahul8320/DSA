#include<bits/stdc++.h>

using namespace std;

void moveZeros(int arr[], int n) {
	int j = -1;
	// find first position that have value 0
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == 0) {
			j = i;
			break;
		}
	}
	// if no zero numbers
	if (j == -1) return;

	// swap all zeros to right
	for (int i = j + 1; i < n; i++) {
		if (arr[i] != 0) {
			swap(arr[i], arr[j]);
			j++;
		}
	}
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	moveZeros(arr, n);

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}