#include <bits/stdc++.h>
using namespace std;

int a[500005];
int n, m;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	sort(a, a + n);
	int m;
	cin >> m;
	while (m--) {
		int t;
		cin >> t;
		cout << upper_bound(a, a + n, t) - lower_bound(a, a + n, t) << '\n';
	}
}

/*

STL���� upper_bound�� lower_bound �Լ��� �ִµ� �� �Լ��� ��ȯ�ϴ� ���� upper_idx�� lower_idx �Լ��� ������ �Ͱ� ���� �Ȱ��� target�� �� �� �ִ�
���� ���� ��ġ�� ������ ��ġ�� ��ȯ�Ѵ�. �׷��� STL�� �Ἥ �ξ� ���� Ǯ �� �ְ�, ������ binary_search�� �Ȱ��� ù ��°�� �� ��° ���ڷ� ������ �ش�.
�迭�� ��쿡�� a, a+n �̰� ���Ͷ�� begin(), end().

lower_bound�� upper_bound�� ��ȯ �ڷ����� a�� �迭�̶�� ������, vector��� iterator�̴�.

�׸��� equal_range��� �ؼ� lower_bound, upper_bound�� ����� pair�� ��ȯ���ִ� �Լ��� �ִ�.

*/
