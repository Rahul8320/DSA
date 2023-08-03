#include<bits/stdc++.h>

using namespace std;

int sumOfAllDivisor(int n) {
	int sum = 0;
	for (int i = 1; i * i <= n; ++i)
	{
		if (n % i == 0) {
			sum += i;
			int temp = n / i;
			if (temp != i) {
				sum += temp;
			}
		}
	}
	return sum;
}

int main() {
	int n;
	cin >> n;
	cout << sumOfAllDivisor(n) << endl;
	return 0;
}