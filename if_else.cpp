// java-if-else-decision-making0924 gfg problem

#include<iostream>

using namespace std;

string compareNM(int n, int m){
	if(n > m){
		return "greater";
	} else if (n < m){
		return "lesser";
	}else {
		return "equal";
	}
}

int main() {
	int n,m;
	cin >> n >> m;

	cout << compareNM(n,m) << "\n";

	return 0;
}