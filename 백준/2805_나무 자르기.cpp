#include <bits/stdc++.h>
using namespace std;

int n, m, cut;
int tree[1000000];

long long getWood(int cut) {
	long long sum = 0;
	for (int i = 0; i < n; ++i)
		if (tree[i] - cut > 0)
			sum += tree[i] - cut;
	return sum;
}

void bsearch(int m, int start, int end) {
	cut = (end - start) / 2 + start;
	long long woods = getWood(cut);
	if ((woods == m) || (cut == start) || (cut == end) || (start >= end)) 
		return;
	else if (woods > m)
		bsearch(m, cut, end);
	else if (woods < m)
		bsearch(m, start, cut);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	int start, end;
	start = end = 0;
	for (int i = 0; i < n; ++i) {
		cin >> tree[i];
		end = max(end, tree[i]);
	}

	sort(tree, tree + n);

	bsearch(m, start, end);

	cout << cut;

	return 0;
}