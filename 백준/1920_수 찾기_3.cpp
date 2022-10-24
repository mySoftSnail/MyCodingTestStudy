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
		// a가 배열 대신 벡터였다면 두 인자를 각각 a.begin(), a.end()로 넘기면 된다.
	}
}

/*

STL binary_search 함수는 범위를 주면 주어진 범위 내에 원소가 들어있는지 여부를 O(lgN)에 true 혹은 false로 알려준다.
단, 범위는 반드시 오름차순으로 정렬되어 있어야 한다. 그렇지 않으면 실제로는 값이 들어 있는데 들어있지 않다고 판단할 수 있다.
가능하면 이분탐색을 직접 구현하는 대신 STL을 쓰는게 좋다.

*/
