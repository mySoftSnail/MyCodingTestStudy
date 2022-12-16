#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, m;
	string name[1002]; 
	unordered_map<string, int> id; // �̸��� �ε����� ������ ������ ���� ���� ������ȣ�� ��ȯ�ϴ� �ؽ�

	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> name[i];
	sort(name + 1, name + n + 1);

	for (int i = 1; i <= n; ++i)
		id[name[i]] = i;

	int indeg[1002]; // �� ������� indegree�� �� �迭
	fill(indeg, indeg + 1002, 0);
	vector<int> adj[1002]; // ���� ����Ʈ

	cin >> m;
	for (int i = 0; i < m; ++i) {
		string X, Y;
		cin >> X >> Y;
		adj[id[Y]].push_back(id[X]);
		indeg[id[X]]++;
	}

	// �������� ������ȣ�� ������ ���� ac�� indegree�� 0�� ������ ������ȣ�� ���
	vector<int> ac;
	for (int i = 1; i <= n; ++i)
		if (!indeg[i])
			ac.push_back(i);

	cout << ac.size() << '\n';
	for (int a : ac)
		cout << name[a] << ' ';
	cout << '\n';

	vector<int> ch[1002]; // �� ������� �ڳ�� ������ȣ�� ������ ���� ch
	// indegree�� 1 ���� �ļ�(�ڳ�)���� ������ �迭 ch�� ����
	for (int i = 1; i <= n; ++i) {
		sort(adj[i].begin(), adj[i].end()); // �ڽĵ��� ���������� ����
		for (int c : adj[i])
			if (indeg[c] - indeg[i] == 1)
				ch[i].push_back(c);
	}

	// �ش��ϴ� ����� �ڽ��� ��, �׸��� �ڽĵ��� �̸��� ���
	for (int i = 1; i <= n; ++i) {
		int sz = ch[i].size();
		cout << name[i] << ' ' << sz << ' ';
		for (int c : ch[i])
			cout << name[c] << ' ';
		cout << '\n';
	}
}