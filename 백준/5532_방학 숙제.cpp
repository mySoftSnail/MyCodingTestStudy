#include <bits/stdc++.h>
using namespace std;

int L, A, B, C, D;

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin >> L >> A >> B >> C >> D;

	int gukDay = A / C + ((A % C) != 0);
	int suDay = B / D + ((B % D) != 0);
	cout << L - max(gukDay, suDay);
}