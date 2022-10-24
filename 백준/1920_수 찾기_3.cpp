#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[100005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	sort(a, a + n);

	cin >> m;
	while (m--) {
		int x;
		cin >> x;
		cout << binary_search(a, a + n, x) << '\n';
		// a�� �迭 ��� ���Ϳ��ٸ� �� ���ڸ� ���� a.begin(), a.end()�� �ѱ�� �ȴ�.
	}
}

/*

STL binary_search �Լ��� ������ �ָ� �־��� ���� ���� ���Ұ� ����ִ��� ���θ� O(lgN)�� true Ȥ�� false�� �˷��ش�.
��, ������ �ݵ�� ������������ ���ĵǾ� �־�� �Ѵ�. �׷��� ������ �����δ� ���� ��� �ִµ� ������� �ʴٰ� �Ǵ��� �� �ִ�.
�����ϸ� �̺�Ž���� ���� �����ϴ� ��� STL�� ���°� ����.

*/
