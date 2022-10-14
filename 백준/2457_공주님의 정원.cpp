#include <bits/stdc++.h>
using namespace std;

#define start first
#define end second
int n;
vector<pair<int, int>> f;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		int sm, sd, em, ed;
		cin >> sm >> sd >> em >> ed;
		f.push_back({ sm * 100 + sd, em * 100 + ed });
	}

	int ans = 0;
	int t = 301;
	while (t < 1201) {
		int nxt_t = t;
		for (int i = 0; i < n; ++i) {
			if (f[i].start <= t && f[i].end > nxt_t)
				nxt_t = f[i].end;
		}
		if (nxt_t == t) {
			cout << 0;
			return 0;
		}
		ans++;
		t = nxt_t;
	}

	cout << ans;
}