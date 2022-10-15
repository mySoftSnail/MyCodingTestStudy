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

		if (L <= right && R >= right) // 선이 겹침
			right = R;	// 오른쪽으로 확장
		else if (L > right) {	// 겹치지 않음
			ans += right - left;	// 정답에 지금까지의 길이 추가
			
			// 새로운 선으로 변경
			left = L;	
			right = R;
		}
	
	}

	ans += right - left;

	cout << ans;
}

/*

벡터를 정렬함으로써 가장 왼쪽(-방향)인 시작점을 찾을 수 있다.
그 선에서 오른쪽으로 가면서 길이를 증가시키거나 새로운 선을 추가한다.


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