#include <bits/stdc++.h>
using namespace std;

int N;
string arr[50];

bool comp(const string& a, const string& b) {
	if (a.size() != b.size()) return a.size() < b.size();
	int asum, bsum;
	asum = bsum = 0;
	for (int i = 0; i < a.size(); ++i) {
		if ((a[i] >= '0') && (a[i] <= '9')) asum += (a[i] - '0');
		if ((b[i] >= '0') && (b[i] <= '9')) bsum += (b[i] - '0');
	}
	if (asum != bsum) return asum < bsum;
	else return a < b;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; ++i)
		cin >> arr[i];

	sort(arr, arr + N, comp);

	for (int i = 0; i < N; ++i)
		cout << arr[i] << '\n';

	return 0;
}