#include<bits/stdc++.h>

using namespace std;

vector<int> getFrequencies(vector<int>& v) {
	vector<int> ans;
	unordered_map<int, int> hash;
	int max_count = 0;
	int min_count = INT_MAX;

	for (auto it : v) {
		hash[it]++;
	}

	for (auto it : hash) {
		max_count = max(max_count, it.second);
		min_count = min(min_count, it.second);
	}

	int max_number = INT_MAX;
	int min_number = INT_MAX;
	for (auto it : hash) {
		if (it.second == max_count) {
			max_number = min(max_number, it.first);
		}
		if (it.second == min_count) {
			min_number = min(min_number, it.first);
		}
	}

	ans.push_back(max_number);
	ans.push_back(min_number);

	return ans;
}

int main() {
	int n;
	cin >> n;
	vector<int> vc;
	for (int i = 0; i < n; ++i)
	{
		int input;
		cin >> input;
		vc.push_back(input);
	}

	vector<int> result = getFrequencies(vc);

	for (auto it : result) {
		cout << it << endl;
	}
	return 0;
}