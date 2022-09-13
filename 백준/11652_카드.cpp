#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll arr[100005];
int N;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N;
	for (int i = 0; i < N; ++i)
		cin >> arr[i];

	sort(arr, arr + N);

	int cnt = 0;
	ll mxval = LLONG_MIN;
	int mxcnt = 0;

	for (int i = 0; i < N; ++i) {
		if (i == 0 || arr[i - 1] == arr[i]) cnt++;
		else {
			if (mxcnt < cnt) {
				mxcnt = cnt;
				mxval = arr[i - 1];
			}
			cnt = 1;
		}
	}

	if (cnt > mxcnt) mxval = arr[N - 1];

	cout << mxval;

	return 0;
}