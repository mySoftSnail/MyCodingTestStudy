#include <bits/stdc++.h>
using namespace std;

int N;
int D[1003];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	D[1] = 1;
	D[2] = 2;

	cin >> N;
	for (int i = 3; i <= N; ++i) 
		D[i] = (D[i - 1] + D[i - 2]) % 10007;
	
	cout << D[N];

	return 0;
}