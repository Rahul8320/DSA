// double-triangle-pattern-1662664259

#include<iostream>
using namespace std;

void printTriangle(int n) {
	for (int i = 1; i <= n; ++i)
	{
		// for 1st half
		for(int j = 1; j<= i; j++){
			cout << j << " ";
		}
		// for space
		for(int j = 1; j<= (n-i)*2; j++){
			cout << " " << " ";
		}
		// for 2nd half
		for(int j = i; j > 0; j--){
			cout << j << " ";
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