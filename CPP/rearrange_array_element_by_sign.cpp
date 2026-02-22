#include<bits/stdc++.h>
using namespace std;

/*
	==== Burte Force Approach ====
	TC: O(N+N/2)
	SC: O(N)
*/
void solve(int arr[], int n){
	vector<int> pos;
	vector<int> neg;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i] > 0){
			pos.push_back(arr[i]);
		}else{
			neg.push_back(arr[i]);
		}
	}

	for (int i = 0; i < n/2; ++i)
	{
		arr[i*2] = pos[i];
		arr[i*2+1] = neg[i];
	}
}

/*
	==== Burte Force Approach for if neg and pos are not equals ====
	TC: O(2N)
	SC: O(N)
*/
void solveForNotEquals(int arr[], int n){
	vector<int> pos;
	vector<int> neg;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i] > 0){
			pos.push_back(arr[i]);
		}else{
			neg.push_back(arr[i]);
		}
	}

	int posSize = pos.size();
	int negSize = neg.size();

	if(posSize > negSize){
		for (int i = 0; i < negSize; ++i)
		{
			arr[i*2] = pos[i];
			arr[i*2+1] = neg[i];
		}
		int index = negSize * 2;
		for(int i = negSize; i < posSize; i++){
			arr[index] = pos[i];
			index++;
		}
	}
	else {
		for (int i = 0; i < posSize; ++i)
		{
			arr[i*2] = pos[i];
			arr[i*2+1] = neg[i];
		}
		int index = posSize * 2;
		for(int i = posSize; i < negSize; i++){
			arr[index] = neg[i];
			index++;
		}
	}
}

/*
	==== Optimal Approach ====
	TC: O(N)
	SC: O(N)
*/
vector<int> solve2(int arr[], int n){
	vector<int> ans(n,0);
	int posIndex = 0;
	int negIndex = 1;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i] < 0){
			ans[negIndex] = arr[i];
			negIndex += 2;
		}else {
			ans[posIndex] = arr[i];
			posIndex += 2;
		}
	}
	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("inputf.in","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("outputf.out","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	solveForNotEquals(arr, n);

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	// vector<int> result = solve2(arr, n);
	// for(auto it : result){
	// 	cout << it << " ";
	// }
	// cout << endl;
	
	return 0;
}