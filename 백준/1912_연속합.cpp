#include <bits/stdc++.h>
using namespace std;

int N;
int A[100010];
int D[100010];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 1; i <= N; ++i) {
		cin >> A[i];
		D[i] = A[i];
	}

	for (int i = 1; i <= N; ++i)
		D[i] = max(D[i], D[i - 1] + A[i]);

	cout << *max_element(D + 1, D + N + 1);
}