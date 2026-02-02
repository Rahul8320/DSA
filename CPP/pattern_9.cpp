// pattern gfg problem

#include <iostream>

using namespace std;

void printDiamond(int n) {
	for (int i = 1; i < 2*n; ++i)
	{
		// i <= n
		if(i <= n){
			// for space
			for(int j=0; j<n-i; j++){
				cout << " ";
			}
			// for star
			for(int j=0; j<i; j++){
				cout << "*" << " ";
			}
			cout << "\n";
		}
		// i>= n
		if(i >= n){
			// for space
			for(int j=0; j<i-n; j++){
				cout << " ";
			}
			// for star
			for(int j=0; j<(2*n-i); j++){
				cout << "*" << " ";
			}
			cout << "\n";
		}
	}
}

int main(){
	int n; cin >> n;

	printDiamond(n);

	return 0;
}
