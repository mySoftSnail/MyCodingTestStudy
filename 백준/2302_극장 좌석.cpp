#include <bits/stdc++.h>
using namespace std;

int n, m;
int d[45]; // d[i]: ���ӵ� i���� �¼��� ���� �� �ִ� ����� ��
vector<int> v = { 0 }; // 0�� �¼�, ������, N+1�� �¼�

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	v.push_back(n + 1); // �¼��� ��

	d[0] = 1; // length�� 0�� �� �ִ�
	d[1] = 1;
	d[2] = 2;
	for (int i = 3; i <= n; ++i) 
		d[i] = d[i - 1] + d[i - 2];
	
	int ans = 1;
	for (int i = 1; i < v.size(); ++i) {
		int length = v[i] - v[i - 1] - 1;
		ans *= d[length];
	}

	cout << ans;
}

