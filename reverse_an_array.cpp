#include<bits/stdc++.h>

using namespace std;

// one pointer method
void reverseArray(int i, int arr[], int n) {
	if (i >= n / 2) return;

	swap(arr[i], arr[n - i - 1]);

	reverseArray(i + 1, arr, n);

}

// two pointer method
void reverseArray(int left, int right, int arr[]) {
	if (left >= right) {
		return;
	}

	int temp = arr[left];
	arr[left] = arr[right];
	arr[right] = temp;

	reverseArray(left + 1, right - 1, arr);
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// reverseArray(0, n - 1, arr);
	reverseArray(0, arr, n);

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}