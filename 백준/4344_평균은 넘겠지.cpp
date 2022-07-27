#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> V(n);

		int sum = 0;
		for (int i = 0; i < n; ++i) {
			cin >> V[i];
			sum += V[i];
		}
		double avg = sum / n;
		
		int cnt = 0;
		for (int i = 0; i < n; ++i) {
			if (V[i] > avg) cnt++;
		}
		double ratio = double(cnt) / n;
		ratio *= 100.0;

		cout << showpoint << setprecision(5) << ratio << '%' << '\n';
	}

	return 0;
}