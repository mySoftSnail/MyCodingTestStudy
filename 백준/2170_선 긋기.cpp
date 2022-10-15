#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int>> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}

	sort(v.begin(), v.end());

	int ans = 0;
	int left, right;
	tie(left, right) = v[0];
	
	for (int i = 1; i < n; ++i) {
		int L, R;
		tie(L, R) = v[i];

		if (L <= right && R >= right) // ���� ��ħ
			right = R;	// ���������� Ȯ��
		else if (L > right) {	// ��ġ�� ����
			ans += right - left;	// ���信 ���ݱ����� ���� �߰�
			
			// ���ο� ������ ����
			left = L;	
			right = R;
		}
	
	}

	ans += right - left;

	cout << ans;
}

/*

���͸� ���������ν� ���� ����(-����)�� �������� ã�� �� �ִ�.
�� ������ ���������� ���鼭 ���̸� ������Ű�ų� ���ο� ���� �߰��Ѵ�.


IN:
5
-5 -2
-3 0
2 5
6 10
8 12

ANSWER:
14

*/