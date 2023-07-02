// ticket-counter-2731  gfg problem

#include <bits/stdc++.h>
using namespace std;

int distributeTicket(int N, int K) {
	deque<int> st;
	for (int i=1; i<= N; i++){
		st.push_back(i);
	}

	bool flag = true;
	int result = 0;
	for (int i = 0; i < N; )
	{
		int temp = K;
		while(temp > 0 && !st.empty()){
			if(flag){
				result = st.front();
				st.pop_front();
				temp--;
				i++;
			}else{
				result = st.back();
				st.pop_back();
				temp--;
				i++;
			}
		}
		flag = !flag;
	}

	return result;
}

int main() {
	int n, k;
	cin >> n >> k;

	int result = distributeTicket(n,k);
	cout << result << endl;
	return 0;
}