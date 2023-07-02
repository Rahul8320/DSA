// count-digits5716

#include <iostream>
using namespace std;

int evenlyDivides(int N){
    int count = 0;
    int temp = N;
    while(N > 0){
        int lastDigit = N % 10;
        if(lastDigit != 0 && temp % lastDigit == 0){
            count++;
        }
        N = (int)( N / 10);
    }
    return count;
}

int main(){
	int n;
	cin >> n;
	cout << evenlyDivides(n) << endl;
	
	return 0;
}