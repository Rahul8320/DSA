// reverse-bits3556

#include<iostream>
using namespace std;

long long reverseBits(long long X){
	int pow = 31;
	long long res = 0;
	while(X != 0){
		res += ((X & 1) << pow);
		pow--;
		X = X >> 1;
	}
	return res;
}

int main(){
	long long n;
	cin >> n;

	cout << reverseBits(n) << endl;

	return 0;
}