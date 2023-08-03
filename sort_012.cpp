#include<bits/stdc++.h>

using namespace std;

void sort012(int arr[], int n) {
	int low = 0;
	int mid = 0;
	int high = n - 1;
	for (int i = 0; i < n; ++i)
	{
		if (arr[mid] == 0) {
			swap(arr[mid], arr[low]);
			mid++;
			low++;
		} else if (arr[mid] == 1) {
			mid++;
		} else {
			swap(arr[mid], arr[high]);
			high--;
		}
	}
}

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}

		sort012(arr, n);

		for (int i = 0; i < n; ++i)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	return 0;
}