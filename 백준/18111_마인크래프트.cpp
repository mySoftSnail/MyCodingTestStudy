#include <bits/stdc++.h>
using namespace std;

int N, M, B;
int board[500][500];
int t[257];
int mintime = INT_MAX;

int calcTime(int target) {
	int up, down;
	up = down = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (target > board[i][j]) {
				up += (target - board[i][j]);
			}
			else if (target < board[i][j]) {
				down += (board[i][j] - target);
			}
		}
	}

	int time = 0;
	time += down * 2;
	if (up <= B + down) {
		time += up;
		return time;
	}

	return INT_MAX;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	fill(t, t + 257, INT_MAX);

	cin >> N >> M >> B;
	for (int i = 0; i < N; ++i) 
		for (int j = 0; j < M; ++j) 
			cin >> board[i][j];

	for (int i = 0; i <= 256; ++i) {
		t[i] = calcTime(i);
		mintime = min(mintime, t[i]);
	}

	for (int i = 256; i >= 0; --i) {
		if (t[i] == mintime) {
			cout << t[i] << ' ' << i;
			return 0;
		}
	}

	return 0;
}