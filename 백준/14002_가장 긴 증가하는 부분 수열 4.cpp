#include <bits/stdc++.h>
using namespace std;

int n;
int a[1010], d[1010];
int pre[1010];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		d[i] = 1;
		pre[i] = -1;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < i; ++j) {
			if (a[i] > a[j]) {
				d[i] = max(d[i], d[j] + 1);
				if (d[i] == d[j] + 1) {
					pre[i] = j;
				}
			}
		}
	}
	
	int mxidx = 0;
	int mxlength = d[0];
	for (int i = 1; i < n; ++i) {
		if (d[i] > mxlength) {
			mxidx = i;
			mxlength = d[i];
		}
	}

	cout << mxlength << '\n';

	//vector<int> v;
	deque<int> dq;
	int cur = mxidx;
	while (cur != -1) {
		//v.push_back(a[cur]);
		dq.push_front(a[cur]);
		cur = pre[cur];
	}

	/*for (auto it = v.end() - 1; it != v.begin() - 1; --it)
		cout << *it << ' ';*/
	for (auto e : dq)
		cout << e << ' ';
}

