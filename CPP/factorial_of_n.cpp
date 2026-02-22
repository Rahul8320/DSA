#include<bits/stdc++.h>

using namespace std;

// factorial numbers less than n
vector<long long> factorialNumbers(long long n) {
	// Write Your Code Here
	vector<long long> ans;

	long long res = 1;
	for (long long i = 1; i <= n; i++) {
		res = res * i;
		if (res <= n) {
			ans.push_back(res);
		} else {
			return ans;
		}
	}

}

// factorial of n
int factorial(int n) {
	if (n == 0) return 1;

	return n * factorial(n - 1);
}

int main() {
	int n;
	cin >> n;
	cout << factorial(n) << endl;
	return 0;
}