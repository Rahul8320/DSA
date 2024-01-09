#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void setRow(vector<vector<int>> &matrix, int i, int m){
	for(int j=0;j<m;j++){
		if(matrix[i][j] != 0){
			matrix[i][j] = -1;
		}
	}
	return;
}

void setColumn(vector<vector<int>> &matrix, int j, int n){
	for(int i=0;i<n;i++){
		if(matrix[i][j] != 0){
			matrix[i][j] = -1;
		}
	}
	return;
}

/*
	Brute Forch Approach 
	TC: O(2 * N*M) + O(N) + O(M)
	SC: O(1)
*/
void solve(vector<vector<int>> &matrix, int n, int m)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(matrix[i][j] == 0){
				setRow(matrix, i, m);
				setColumn(matrix, j, n);
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(matrix[i][j] == -1){
				matrix[i][j] = 0;
			}
		}
	}
	return;
}

/*
	Better Approach 
	TC: O(2* N * M)
	SC: O(N) + O(M)
*/
void solve2(vector<vector<int>> &matrix, int n, int m){
	int row[n] = {0};
	int col[m] = {0};

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(matrix[i][j] == 0){
				row[i] = 1;
				col[j] = 1;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(row[i] || col[j]){
				matrix[i][j] = 0;
			}
		}
	}
	return;
}

/*
	Optimal Approach 
	TC: O(2* N * M)
	SC: O(1)
*/
void solve3(vector<vector<int>> &matrix, int n, int m){
	// int row[n] = {0}; -> matrix[i][0]
	// int col[m] = {0}; -> matrix[0][j]

	int col0 = 1;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(matrix[i][j] == 0){
				matrix[i][0] = 0;
				if(j != 0){
					matrix[0][j] = 0;
				}else{
					col0 = 0;
				}
			}
		}
	}

	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j < m; ++j)
		{
			if(matrix[i][0] == 0 || matrix[0][j] == 0){
				matrix[i][j] = 0;
			}
		}
	}

	if(matrix[0][0] == 0){
		for (int j = 0; j < m; ++j)
		{
			matrix[0][j] = 0;
		}
	}

	if(col0 == 0){
		for (int i = 0; i < n; ++i)
		{
			matrix[i][0] = 0;
		}
	}
	return;
}


int main()
{
  int n,m;
  cin >> n >> m;
  vector<vector<int>> matrix;
  for (int i = 0; i < n; ++i)
  {
  	vector<int> temp;
  	for (int j = 0; j < m; ++j)
  	{
  		int k;
  		cin >> k;
  		temp.push_back(k);
  	}
  	matrix.push_back(temp);
  }
  solve3(matrix, n, m);

  for (int i = 0; i < n; ++i)
  {
  	for (int j = 0; j < m; ++j)
  	{
  		cout << matrix[i][j] << " ";
  	}
  	cout << endl;
  }
  return 0;
}