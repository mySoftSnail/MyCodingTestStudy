#include <bits/stdc++.h>
using namespace std;

pair<int, int> jew[300003];

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; ++i) 
		cin >> jew[i].second >> jew[i].first;
	sort(jew, jew + n);

	multiset<int> bag;
	for (int i = 0; i < k; ++i) {
		int c;
		cin >> c;
		bag.insert(c);
	}

	long long ans = 0;
	for (int i = n - 1; i >= 0; i--) {
		int m, v;
		tie(v, m) = jew[i];
		auto it = bag.lower_bound(m);
		if (it == bag.end()) continue; // 최대 무게가 m 이상인 가방이 없음
		ans += v;
		bag.erase(it);
	}

	cout << ans;
}


/*

가장 가격이 높은 보석부터 확인하며 해당 보석을 담을 수 있는 가방 중 최대 무게가 가장 작은 가방을 이용해 보석을 담는게 최대 이익이다.

*/