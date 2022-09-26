#include <bits/stdc++.h>
using namespace std;

int n, m, l;
int arr[53];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m >> l;

	int ans = 0;
	arr[1] = 1;
	int cur = 1;
	while (true) {
		if (arr[cur] >= m) break;
		
		int next;
		if (arr[cur] % 2 == 1) {
			next = cur + l;
			if (next > n) next -= n;
		}
		else {
			next = cur - l;
			if (next <= 0) next += n;
		}
		arr[next]++;
		ans++;
		cur = next;
	}

	cout << ans;
}

