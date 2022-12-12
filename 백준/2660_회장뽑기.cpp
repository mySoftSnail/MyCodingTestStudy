#include <bits/stdc++.h>
using namespace std;

int dist[52][52];
int v;
vector<int> adj[52];
int score[52];

void bfs(int i) {
	fill(dist[i], dist[i] + v + 1, -1);
	queue<int> q;
	q.push(i);
	dist[i][i] = 0;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (auto nxt : adj[cur]) {
			if (dist[i][nxt] != -1) continue;
			q.push(nxt);
			dist[i][nxt] = dist[i][cur] + 1;
		}
	}
}

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> v;
	while (1) {
		int u, v;
		cin >> u >> v;
		if (v == -1) break;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (int i = 1; i <= v; ++i)
		bfs(i);

	fill(score, score + v + 1, INT_MAX);
	for (int i = 1; i <= v; ++i) {
		score[i] = *max_element(dist[i], dist[i] + v + 1);
	}

	vector<int> candidate;
	int canscore = *min_element(score, score + v + 1);
	cout << canscore << ' ';
	for (int i = 1; i <= v; ++i) {
		if (score[i] == canscore)
			candidate.push_back(i);
	}
	cout << candidate.size() << '\n';

	sort(candidate.begin(), candidate.end());
	for (auto e : candidate)
		cout << e << ' ';
}

