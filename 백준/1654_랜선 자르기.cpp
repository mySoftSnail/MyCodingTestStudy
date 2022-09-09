#include <bits/stdc++.h>
using namespace std;

#define ll long long
int N, K;
vector<int> lans;
vector<int> ans;
int mn, mx;

ll cutLan(int length) {
	ll cnt = 0;
	for (auto& e : lans) 
		cnt += e / length;
	return cnt;
}

void solve(int start, int end) {
	if ((start > end) || (start < mn) || (end > mx)) return;

	int half = (end - start) / 2 + start;
	ll cnt = cutLan(half);

	if (cnt < N) solve(start, half - 1);
	else {
		ans.push_back(half);
		solve(half + 1, end);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> K >> N;
	for (int i = 0; i < K; ++i) {
		int x;
		cin >> x;
		lans.push_back(x);
	}

	sort(lans.begin(), lans.end());

	mn = 1;
	mx = lans[lans.size() - 1];
	solve(mn, mx);

	int answer = 0;
	for (auto& e : ans) 
		answer = max(answer, e);

	cout << answer;

	return 0;
}