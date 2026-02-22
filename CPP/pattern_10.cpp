// triangle-pattern-1661718013  gfg problem

#include <iostream>

using namespace std;

void printTriangle(int n) {
	for (int i = 1; i < 2*n; ++i)
	{
		// i <= n
		if(i <= n){
			for(int j = 0; j < i; j++){
				cout << "*" << " ";
			}
		}
		// i >  n 
		else {
			for (int j = 0; j < 2*n - i; j++)
			{
				cout << "*" << " ";
			}
		}
		cout << "\n";
	}
}

int main() {
	int n;
	cin >> n;

	printTriangle(n);

	return 0;
}