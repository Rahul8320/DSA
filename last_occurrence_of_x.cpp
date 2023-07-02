// Find the last occurence of a X in a sorted array. If it does not exists, print -1.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 9;
	int a[] ={1,4,4,4,4,9,9,10,11};
	int X;
	cin >> X;

	int index = upper_bound(a, a+n, X) - a;
	index--;

	if(index >= 0 && a[index] == X) cout << index << endl;
	else cout << -1 << "\n";

	return 0;
}