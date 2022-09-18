#include <bits/stdc++.h>
using namespace std;

long long D[100];
int N;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	D[1] = 1;
	D[2] = 1;
	for (int i = 3; i <= N; ++i) 
		D[i] = D[i - 1] + D[i - 2];
	
	cout << D[N];

	return 0;
}