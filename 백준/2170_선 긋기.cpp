#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int>> v;
#define X first
#define Y second

bool comp(pair<int, int>& a, pair<int, int>& b) {
	int aL = a.Y - a.X;
	int bL = b.Y - b.X;
	if (aL != bL) return aL > bL;
	else return a < b;
}

void print() {
	for (auto e : v) {
		cout << "(" << e.X << ", " << e.Y << ") len: " << e.Y - e.X << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}

	sort(v.begin(), v.end(), comp);

	print();

	int ans = 0;
	int st = v[0].X;
	int en = v[0].Y;
	
	cout << "(st, en): " << st << " " << en << '\n';
	
	
	for (int i = 1; i < n; ++i) {
		if ((en >= v[i].X && st < v[i].Y) || (st <= v[i].Y && v[i].X < en)) {
			if (en < v[i].Y) en = v[i].Y;
			if (st > v[i].X) st = v[i].X;
		}
		else
			ans += v[i].Y - v[i].X;

		cout << "ans: " << ans << '\n';
	}

	cout << "(st, en): " << st << " " << en << '\n';

	ans += en - st;
	cout << "ans: " << ans << '\n';

	cout << ans;
}

/*

IN:
5
-5 -2
-3 0
2 5
6 10
8 12

ANSWER:
14

WRONG ANSWER:
15

4
1 3
4 6
7 8
10 13
#8

4
-1000000000 1000000000
-1000000000 0
0 1000000000
-1000000000 1000000000

3
-1 0
0 1
1 2

3
-1 0
-1 5
0 3


*/