#include <bits/stdc++.h>
using namespace std;

int n;
int a[100003];
bool b[100003];

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];

	long long ans = 0;
	int en = 0;
	b[a[0]] = 1;
	for (int st = 0; st < n; ++st) {
		while (en < n - 1 && !b[a[en + 1]]) {
			en++;
			b[a[en]] = 1;
		}

		ans += en - st + 1;
		b[a[st]] = 0;
	}

	cout << ans;
}