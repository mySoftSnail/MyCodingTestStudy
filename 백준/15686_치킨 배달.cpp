#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int n, m;
int board[52][52];
int n_house = 0;
int n_chick = 0;
pair<int, int> houses[102];
pair<int, int> chickens[15];
bool isSelected[15];
int ans = 20000;
int arr[15];

int getHouseDist(int x1, int y1) {
	int dist = 20000;
	for (int i = 0; i < n_chick; ++i) {
		if (!isSelected[i]) continue;
		dist = min(dist, (abs(x1 - chickens[i].X) + abs(y1 - chickens[i].Y)));
	}
	return dist;
}

int getCityDist() {
	int dist = 0;
	for (int i = 0; i < n_house; ++i) {
		int n = getHouseDist(houses[i].X, houses[i].Y);	
		dist += n;
	}
	return dist;
}

void solve(int k) {
	if (k == m) {
		ans = min(ans, getCityDist());
	}

	int start = 0;
	if (k != 0) start = arr[k - 1] + 1;

	for (int i = start; i < n_chick; ++i) {
		if (!isSelected[i]) {
			arr[k] = i;
			isSelected[i] = true;
			solve(k + 1);
			isSelected[i] = false;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> board[i][j];
			if (board[i][j] == 1) {
				houses[n_house++] = { i + 1, j + 1 };
			} 
			if (board[i][j] == 2) {
				chickens[n_chick++] = { i + 1, j + 1 };
			}
		}
	}

	solve(0);

	cout << ans;

	return 0;
}