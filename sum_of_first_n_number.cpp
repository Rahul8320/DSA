#include<bits/stdc++.h>

using namespace std;

// paramitarize way
void sumOfNumber(int n, int sum) {
	if (n < 1) {
		cout << sum << endl;
		return;
	}

	sumOfNumber(n - 1, sum + n);
}

// functional way
int sumOfNumber(int n) {
	if (n == 0) return 0;

	return n + sumOfNumber(n - 1);
}

int main() {
	int n;
	cin >> n;
	cout << sumOfNumber(n) << endl;
	return 0;
}