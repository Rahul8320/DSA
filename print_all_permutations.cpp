// print all permutations from a string

#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	sort(s.begin(), s.end());

	do{
		cout << s << endl;
	}while(next_permutation(s.begin(), s.end()));

	return 0;
}