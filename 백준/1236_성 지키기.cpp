#include <bits/stdc++.h>
using namespace std;

int n, m;
int board[52][52];
int rows[52];
int cols[52];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		string str;
		cin >> str;
		for (int j = 0; j < str.size(); ++j) {
			if (str[j] == '.') board[i][j] = 0;
			else if (str[j] == 'X') board[i][j] = 1;
		}
	}
	
	for (int i = 0; i < n; ++i) 
		for (int j = 0; j < m; ++j) 
			rows[i] += board[i][j];
	
	for (int i = 0; i < m; ++i) 
		for (int j = 0; j < n; ++j) 
			cols[i] += board[j][i];

	int empty_r = 0;
	for (int i = 0; i < n; ++i) 
		if (!rows[i]) empty_r++;
	
	int empty_c = 0;
	for (int i = 0; i < m; ++i)
		if (!cols[i]) empty_c++;

	cout << max(empty_r, empty_c);
}

