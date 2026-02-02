// triangle-pattern-1661718712

#include <iostream>
using namespace std;

void printTriangle(int n) {
	int k = 1;
	for (int i = 0; i < n; ++i)
	{
		for(int j=0; j<= i;j++){
			cout << k << " ";
			k++;
		}
		cout << "\n";
	}
}

int main(){
	int n; cin >> n;
	printTriangle(n);

	return 0;
}