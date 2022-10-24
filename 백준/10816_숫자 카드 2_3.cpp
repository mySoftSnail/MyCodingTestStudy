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

STL에는 upper_bound와 lower_bound 함수가 있는데 두 함수가 반환하는 값은 upper_idx와 lower_idx 함수로 설명한 것과 완전 똑같이 target이 들어갈 수 있는
가장 왼쪽 위치와 오른쪽 위치를 반환한다. 그래서 STL을 써서 훨씬 쉽게 풀 수 있고, 사용법은 binary_search와 똑같이 첫 번째와 두 번째 인자로 범위를 준다.
배열의 경우에는 a, a+n 이고 벡터라면 begin(), end().

lower_bound와 upper_bound의 반환 자료형은 a가 배열이라면 포인터, vector라면 iterator이다.

그리고 equal_range라고 해서 lower_bound, upper_bound의 결과를 pair로 반환해주는 함수도 있다.

*/
