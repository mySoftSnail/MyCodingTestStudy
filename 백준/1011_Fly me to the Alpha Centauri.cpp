#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll GetDist(int step) {
	ll dist = 0;
	int half = step / 2;

	dist = (half + 1) * half / 2;
	dist *= 2;

	if (step % 2)
		dist += half + 1;
	return dist;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int x, y;
		cin >> x >> y;
	
		int dist = y - x;
		int i = 1;
		while (GetDist(i) < dist) 
			i++;
		
		cout << i << '\n';
	}
}