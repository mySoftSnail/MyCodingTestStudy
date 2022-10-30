#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> primes;

void sieve(int n) {
	vector<bool> state(n + 1, true);
	state[1] = false;

	for (int i = 2; i * i <= n; ++i) {
		if (!state[i]) continue;
		for (int j = i * i; j <= n; j += i)
			state[j] = false;
	}
	for (int i = 2; i <= n; ++i)
		if (state[i]) primes.push_back(i);
}

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n;
	if (n == 1) {
		cout << 0;
		return 0;
	}
	sieve(n);

	int ans = 0;
	int en = 0;
	int tot = primes[0];
	int len = primes.size();

	for (int st = 0; st < len; ++st) {
		while (en < len && tot < n) {
			en++;
			if (en != len) tot += primes[en];
		}
		if (en == len) break;
		if (tot == n) {
			ans++;
		}
		tot -= primes[st];
	}

	cout << ans;
}

/*

4000000까지의 소수 목록을 구하고
i로 시작하는 소수 합으로 나타낼 수 있는지 투 포인터로 확인한다

*/