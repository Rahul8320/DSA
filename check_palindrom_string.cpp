#include<bits/stdc++.h>

using namespace std;

bool checkPalindrom(int i, int n, string st) {
	if (i >= n / 2) return true;

	if (st[i] != st[n - i - 1]) return false;
	else return checkPalindrom(i + 1, n, st);
}

int main() {
	string st;
	cin >> st;
	cout << checkPalindrom(0, st.length(), st) << endl;
	return 0;
}