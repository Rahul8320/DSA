#include<bits/stdc++.h>
using namespace std;

/*
	Intution:
		I) Longer Prefix Match [find the break point from last where decreasing happend]
		II) Find the nearest greater element from the break point index
		III) Try to place remaining into sorted order
	TC: O(3N)
	SC: O(N) [if consoder modifing the array] or O(1)
*/
void nextPermutation(int arr[], int n){
	int ind = -1;
	for (int i = n-2; i >=0 ; --i)
	{
		if(arr[i] < arr[i+1]){
			ind = i;
			break;
		}
	}

	if(ind == -1){
		reverse(arr, arr+n);
		return;
	}

	for(int i=n-1; i> ind; i--){
		if(arr[i] > arr[ind]){
			swap(arr[i], arr[ind]);
			break;
		}
	}

	reverse(arr + ind + 1, arr+n);
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

	nextPermutation(arr, n);

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}