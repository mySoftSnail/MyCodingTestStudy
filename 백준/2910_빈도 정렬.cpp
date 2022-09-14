#include <bits/stdc++.h>
using namespace std;

int N, C;
int num[1000];
map<int, int> freq;
map<int, int> order;

bool comp(int a, int b) {
	if (freq[a] != freq[b]) return freq[a] > freq[b];
	else return order[a] < order[b];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> C;
	int cnt = 0;
	for (int i = 0; i < N; ++i) {
		int x;
		cin >> x;
		num[i] = x;
		if (order.find(x) == order.end()) {
			order[x] = cnt;
			cnt++;
		}
		freq[x]++;
	}

	sort(num, num + N, comp);

	for (int i = 0; i < N; ++i)
		cout << num[i] << ' ';

	return 0;
}