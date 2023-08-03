#include<bits/stdc++.h>

using namespace std;

/*
	---- Brute Force Approach ----
	TC: NO(LogN)
	SC: O(N)
*/
vector<int> unionOfTwo(int arr1[], int n1, int arr2[], int n2) {
	set<int> st;
	for (int i = 0; i < n1; ++i)
	{
		st.insert(arr1[i]);
	}
	for (int i = 0; i < n2; ++i)
	{
		st.insert(arr2[i]);
	}

	vector<int> res;
	for (auto it : st) {
		res.push_back(it);
	}
	return res;
}

/*
	==== Optimal Approach ====
	TC: O(N)
	SC: O(1)
*/
vector<int> unionOfTwoArray(int arr1[], int n1, int arr2[], int n2) {
	int i = 0;
	int j = 0;
	vector<int> res;
	int lastElement = min(arr1[0], arr2[0]);
	res.push_back(lastElement);
	while ( i < n1 && j < n2) {
		if (arr1[i] < arr2[j]) {
			if (arr1[i] != lastElement) {
				res.push_back(arr1[i]);
				lastElement = arr1[i];
			}
			i++;
		} else {
			if (arr2[j] != lastElement) {
				res.push_back(arr2[j]);
				lastElement = arr2[j];
			}
			j++;
		}
	}

	while (i < n1) {
		if (arr1[i] != lastElement) {
			res.push_back(arr1[i]);
			lastElement = arr1[i];
		}
		i++;
	}
	while (j < n2) {
		if (arr2[j] != lastElement) {
			res.push_back(arr2[j]);
			lastElement = arr2[j];
		}
		j++;
	}

	return res;
}

int main() {
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

	vector<int> res = unionOfTwoArray(arr1, n1, arr2, n2);
	for (auto it : res) {
		cout << it << " ";
	}
	cout << endl;
	return 0;
}