// triangle-pattern-1662285911

#include<iostream>
using namespace std;

void printTriangle(int n) {
	for (int i = 0; i < n; ++i)
	{
		// for space
		for(int j=1; j< n-i; j++){
			cout << " ";
		}
		// for ABC
		int k = 0;
		for (; k <= i; ++k)
		{
			cout << char(65+k);
		}
		k = k-1;
		for(; k > 0; k--){
			cout << char(65+k-1);
		}
		// for next line
		cout << "\n";
	}
}

int main(){
	int n; cin >> n;
	printTriangle(n);

	return 0;
}