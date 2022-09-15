#include <bits/stdc++.h>
using namespace std;

int R[1003];
int G[1003];
int B[1003];
int D[1003][3];
int N;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; ++i) 
		cin >> R[i] >> G[i] >> B[i];
	
	D[0][0] = R[0];
	D[0][1] = G[0];
	D[0][2] = B[0];

	for (int i = 1; i < N; ++i) {
		D[i][0] = R[i] + min(D[i - 1][1], D[i - 1][2]);
		D[i][1] = G[i] + min(D[i - 1][0], D[i - 1][2]);
		D[i][2] = B[i] + min(D[i - 1][0], D[i - 1][1]);
	}

	cout << min({ D[N - 1][0],D[N - 1][1],D[N - 1][2] });

	return 0;
}