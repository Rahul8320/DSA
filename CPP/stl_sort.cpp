// stl sort and sort with custom compare 

#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2){
	// sort it according to second element
	if(p1.second < p2.second) return true;
	if(p1.second > p2.second) return false;

	// if they are same sort them according to first element but in desencding order
	if(p1.first > p2.first) return true;
	else return false;
}

int main()
{
	int a[] = {2,1,7,4,9,3,5};
	int n = 7;

	// sort(a, a+n); // sort in asc order
	sort(a, a+n, greater<int>()); // sort in desc order
	
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	pair<int,int> arr[] = {{1,2}, {2,1}, {4,1}};
	// sort this pair using custom compare
	sort(arr, arr+3, comp);

	for(auto it : arr){
		cout << it.first << " "<< it.second;
		cout << endl;
	}

	return 0;
}