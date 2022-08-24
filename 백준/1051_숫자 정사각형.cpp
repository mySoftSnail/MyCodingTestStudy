#include <bits/stdc++.h>
using namespace std;

int n, m;
string board[52];
int ans = 1;

bool OOB(int r, int c) {
	return r >= n || c >= m;
}

void solve(int i, int r, int c) {
	int num = char(board[r][c]) - '0';
	if ((!OOB(r + i, c) && (num == char(board[r + i][c]) - '0')) &&
		(!OOB(r, c + i) && (num == char(board[r][c + i]) - '0')) &&
		(!OOB(r + i, c + i) && (num == char(board[r + i][c + i]) - '0'))) {

		ans = max(ans, (i + 1) * (i + 1));
	}
	else return;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		cin >> board[i];

	for (int i = min(n, m); i > 0; --i) {
		for (int r = 0; r < n; ++r) {
			for (int c = 0; c < m; ++c) {
				solve(i, r, c);
			}
		}
	}

	cout << ans;

	return 0;
}