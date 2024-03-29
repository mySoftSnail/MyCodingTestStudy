#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, m;
	string name[1002]; 
	unordered_map<string, int> id; // 이름을 인덱스로 받으면 사전순 정렬 시의 고유번호를 반환하는 해시

	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> name[i];
	sort(name + 1, name + n + 1);

	for (int i = 1; i <= n; ++i)
		id[name[i]] = i;

	int indeg[1002]; // 각 사람들의 indegree를 셀 배열
	fill(indeg, indeg + 1002, 0);
	vector<int> adj[1002]; // 인접 리스트

	cin >> m;
	for (int i = 0; i < m; ++i) {
		string X, Y;
		cin >> X >> Y;
		adj[id[Y]].push_back(id[X]);
		indeg[id[X]]++;
	}

	// 시조들의 고유번호를 저장할 벡터 ac에 indegree가 0인 시조의 고유번호를 기록
	vector<int> ac;
	for (int i = 1; i <= n; ++i)
		if (!indeg[i])
			ac.push_back(i);

	cout << ac.size() << '\n';
	for (int a : ac)
		cout << name[a] << ' ';
	cout << '\n';

	vector<int> ch[1002]; // 각 사람들의 자녀들 고유번호를 저장할 벡터 ch
	// indegree가 1 많은 후손(자녀)들의 정보를 배열 ch에 저장
	for (int i = 1; i <= n; ++i) {
		sort(adj[i].begin(), adj[i].end()); // 자식들을 사전순으로 정렬
		for (int c : adj[i])
			if (indeg[c] - indeg[i] == 1)
				ch[i].push_back(c);
	}

	// 해당하는 사람과 자식의 수, 그리고 자식들의 이름을 출력
	for (int i = 1; i <= n; ++i) {
		int sz = ch[i].size();
		cout << name[i] << ' ' << sz << ' ';
		for (int c : ch[i])
			cout << name[c] << ' ';
		cout << '\n';
	}
}