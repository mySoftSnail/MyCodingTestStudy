#include <bits/stdc++.h>
using namespace std;

int n;
int adj[104][104];
vector<int> path[104];
bool vis[104];

bool findPath(int i, int j) {
	fill(vis, vis + 104, 0);
	stack<int> s;
	s.push(i);
	vis[i] = true;

	while (!s.empty()) {
		int cur = s.top();
		s.pop();
		
		for (int nxt : path[cur]) {
			if (nxt == j) return true;
			if (vis[nxt]) continue;
			vis[nxt] = true;
			s.push(nxt);
		}
	}
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 1; i <= n; ++i) 
		for (int j = 1; j <= n; ++j) 
			cin >> adj[i][j];

	for (int i = 1; i <= n; ++i) 
		for (int j = 1; j <= n; ++j)
			if (adj[i][j]) path[i].push_back(j);

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cout << findPath(i, j) << ' ';
		}
		cout << '\n';
	}

}

