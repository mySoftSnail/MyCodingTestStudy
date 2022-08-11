#include <bits/stdc++.h>
using namespace std;

#define three first
#define five second
bool vis[5005];
pair<int, int> arr[5005];
int dir[2] = { 3,5 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	queue<int> q;
	q.push(0);
	vis[0] = true;
	arr[0] = { 0,0 };

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int d = 0; d < 2; ++d) {
			int next = cur + dir[d];
			if (next > 5004 || vis[next]) continue;

			if (d == 0) {
				arr[next] = { arr[cur].three + 1, arr[cur].five };
			}
			else if (d == 1) {
				arr[next] = { arr[cur].three, arr[cur].five + 1 };
			}

			q.push(next);
			vis[next] = true;
		}
	}

	if (vis[n]) 
		cout << arr[n].three + arr[n].five;
	
	else 
		cout << -1;

	return 0;
}