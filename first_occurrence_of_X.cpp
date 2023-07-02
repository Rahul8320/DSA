// Find the first occurrence of a X in a sorted array. If it does not exits, // print -1.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 9;
	int a[] = {1,4,4,4,4,9,9,10,11};
	int X;
	cin >> X;

	int index = lower_bound(a, a+n, X) - a;

	if(index != n && a[index] == X) cout << index << "\n";
	else cout << -1 << "\n";

	return 0;
}