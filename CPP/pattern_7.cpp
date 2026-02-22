// triangle-pattern-1661492263 gfg problem

#include <iostream>

using namespace std;

void printTriangle(int n) {
	for (int i = 1; i <= n; ++i)
	{
		// for space
		for(int k = 0; k < (n-i); k++){
			cout << " ";
		}

		
		for (int j = 1; j < i*2; ++j)
		{
			cout<< "*";
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