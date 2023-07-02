// Find the smallest number greater than X in a sorted array. If no number exists print -1.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=9;
	int a[] = {1,4,4,4,4,9,9,10,11};
	int X;
	cin >> X;

	int ind = upper_bound(a, a+n, X) - a;

	if(ind < n) cout << a[ind] << endl;
	else cout << -1 << endl;

	return 0;
}