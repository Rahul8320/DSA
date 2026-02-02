// triangle-number-1661489840 gfg problem

#include<iostream>

using namespace std;

void printTriangle(int n) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 1; j <= n-i; ++j)
		{
			cout<< j <<" ";
		}
		cout << "\n";
	}
}

int main(){
	int n;
	cin >> n;

	printTriangle(n);

	return 0;
}