// data-type-1666706751 gfg problem

#include<iostream>
#include<string>

using namespace std;

int dataTypeSize(string str) {
	if(str == "Character"){
		return 1;
	}else if(str == "Integer" || str == "Float"){
		return 4;
	}else if(str == "Long" || str == "Double"){
		return 8;
	}else {
		return 0;
	}
}

int main() {
	string str;
	cin >> str;

	int res = dataTypeSize(str);
	cout << res << "\n";

	return 0;
}