#include <bits/stdc++.h>
using namespace std;

int N;
int freq[2000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; ++i) {
		int x;
		cin >> x;
		freq[x + 1000000]++;
	}

	for (int i = 0; i < 2000001; ++i) {
		if (freq[i]) {
			for (int j = 0; j < freq[i]; ++j) {
				cout << i - 1000000 << '\n';
			}
		}
	}

	return 0;
}