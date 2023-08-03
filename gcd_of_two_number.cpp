#include<bits/stdc++.h>

using namespace std;

int gcd(int m, int n) {
	int ma = max(m, n);
	int mi = min(m, n);

	while (mi < ma) {
		int temp = ma % mi;
		if (temp == 0) {
			return mi;
		}
		ma = mi;
		mi = temp;
	}
	return 1;
}

int main() {
	int n, m;
	cin >> n >> m;
	cout << gcd(n, m) << endl;
	return 0;
}