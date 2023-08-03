#include<bits/stdc++.h>

using namespace std;

/*
	---- Brute Force Approach ----
	TC: O(N1 * N2)
	SC: O(N2) Extra Space
*/

vector<int> intersectionOfTwo(int a[], int n, int b[], int m) {
	vector<int> res;
	bool visited[m] = {false};
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i] == b[j] && !visited[j]) {
				res.push_back(b[j]);
				visited[j] = true;
				break;
			}
			if (b[j] > a[i]) break;
		}
	}
	return res;
}

/*
	==== Optimal Approach ====
	TC: O(n+m)
	SC: O(1) extra space
*/
vector<int> intersectionOfTwoArray(int a[], int n, int b[], int m) {
	vector<int> res;
	int i = 0;
	int j = 0;
	while (i < n && j < m) {
		if (a[i] < b[j]) {
			i++;
		} else if (a[i] > b[j]) {
			j++;
		}
		else {
			res.push_back(a[i]);
			j++;
			i++;
		}
	}
	return res;
}

int main() {
	int tc; cin >> tc;
	while (tc--) {
		int n1, n2;
		cin >> n1 >> n2;
		int arr1[n1], arr2[n2];
		for (int i = 0; i < n1; ++i)
		{
			cin >> arr1[i];
		}

		for (int i = 0; i < n2; ++i)
		{
			cin >> arr2[i];
		}

		vector<int> res = intersectionOfTwoArray(arr1, n1, arr2, n2);
		for (auto it : res) {
			cout << it << " ";
		}
		cout << endl;
	}

	return 0;
}