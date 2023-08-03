#include<bits/stdc++.h>

using namespace std;

int partition(vector<int> &arr, int left, int right) {
	int pivot = arr[left];
	int i = left;
	int j = right;

	while (i < j) {
		while (arr[i] <= pivot && i < right) {
			i++;
		}

		while (arr[j] > pivot && j > left) {
			j--;
		}

		if (i < j) swap(arr[i], arr[j]);
	}

	swap(arr[left], arr[j]);
	return j;
}

void quickSort(vector<int> &arr, int left, int right) {
	if (left < right) {
		int partitionIndex = partition(arr, left, right);

		quickSort(arr, left, partitionIndex - 1);
		quickSort(arr, partitionIndex + 1, right);
	}
}


int main() {
	int n;
	cin >> n;
	vector<int> vc;
	for (int i = 0; i < n; ++i)
	{
		int input;
		cin >> input;
		vc.push_back(input);
	}

	for (auto it : vc) {
		cout << it << " ";
	}
	cout << endl;

	quickSort(vc, 0, n - 1);

	for (auto it : vc) {
		cout << it << " ";
	}
	cout << endl;

	return 0;
}