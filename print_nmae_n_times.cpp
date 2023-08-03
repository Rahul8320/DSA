#include<bits/stdc++.h>

using namespace std;

void printMyName(int i, int n) {
	if (i > n) return;

	cout << "Rahul" << endl;
	printMyName(i + 1, n);
}

int main() {
	int n;
	cin >> n;
	printMyName(1, n);
	return 0;
}