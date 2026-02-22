// triangle-pattern-1661493231  gfg problem

#include<iostream>

using namespace std;

void printTriangle(int n) {
	for (int i = 0; i < n; ++i)
	{
		// for space
		for (int j = 0; j < i ; j++)
		{
			cout << " ";
		}

		// for star
		for (int j = 1; j < 2*(n - i); ++j)
		{
			cout << "*";
		}

		// next line
		cout << "\n";
	}
}

int main(){
	int n; cin >> n;

	printTriangle(n);

	return 0;
}