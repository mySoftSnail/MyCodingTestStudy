#include <bits/stdc++.h>
using namespace std;

int T;
int A[20000];
int B[20000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;

		for (int i = 0; i < N; ++i)
			cin >> A[i];
		for (int i = 0; i < M; ++i)
			cin >> B[i];

		sort(A, A + N, greater<>());
		sort(B, B + M, greater<>());

		int cnt = 0;
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < M; ++j) {
				if (A[i] > B[j]) {
					cnt += M - j;
					break;
				}
			}
		}

		cout << cnt << '\n';
	}

	return 0;
}