#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n) {
	//Write your code here
	vector<int> vc;
	int countOfDigit = 0;
	int temp = n;
	while (temp > 0) {
		int lastDigit = temp % 10;
		vc.push_back(lastDigit);
		countOfDigit++;
		temp /= 10;
	}
	int res = 0;
	for (auto it : vc) {
		res += round(pow(it, countOfDigit));
	}

	if (res == n) return true;
	return false;
}

int main() {
	int n;
	cin >> n;
	cout << checkArmstrong(n) << endl;
	return 0;
}