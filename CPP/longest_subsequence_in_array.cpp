#include<bits/stdc++.h>

using namespace std;

bool linearSearch(int arr[], int n, int key){
	for (int i = 0; i < n; ++i)
	{
		if(arr[i] == key){
			return true;
		}
	}

	return false;
}

/*
	Burte Force Approach using liner search
	TC: O(N^2)
	SC: O(1)
*/
int solve(int arr[], int n){
	int maxLength = 0;
	for (int i = 0; i < n; ++i)
	{
		int current = arr[i];
		int length = 1;
		while(linearSearch(arr, n, ++current)){
			length ++;
		}
		maxLength = max(maxLength, length);
	}

	return maxLength;
}

/*
	Better Approach using sorting
	TC: O(NlogN)
	SC: O(1)
*/
int solve2(int arr[], int n){
	sort(arr, arr+n); // 1 1 1 2 3 4 100 101 102
	int longest = 1;
	int current = arr[0];
	int count = 1;
	for (int i = 1; i < n; ++i)
	{
		if(arr[i] == current+1){
			count++;
			current++;
			longest = max(longest, count);
		}else if(arr[i] > current+1){
			current = arr[i];
			count = 1;
		}
	}
	return longest;
}

/*
	Optimal Approach using a set 
	TC: O(3N) assuming set takes O(N) for operation
	SC: O(N)
*/
int solve3(int arr[], int n){
	unordered_set<int> st;

	for (int i = 0; i < n; ++i)
	{
		st.insert(arr[i]);
	}

	int longest = 0;
	for(auto it:st){
		if(st.find(it-1) == st.end()){
			int count = 1;
			int current = it;
			while(st.find(current+1) != st.end()){
				count++;
				current++;
			}
			longest = max(count, longest);
		}
	}
	return longest;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int result = solve3(arr, n);

	cout << result << endl;

	return 0;
}
