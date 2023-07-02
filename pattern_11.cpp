// triangle-pattern-1661718455 gfg

#include <iostream>

using namespace std;

void printTriangle(int n) {
	for (int i = 1; i <= n; ++i)
	{
		for(int j=1; j<=i; j++){
			int k = (i+j) % 2 == 0;
			cout << k << " ";
		}
		cout << "\n";
	}
}

int main() {
	int n; cin >> n;
	printTriangle(n);

	return 0;
}