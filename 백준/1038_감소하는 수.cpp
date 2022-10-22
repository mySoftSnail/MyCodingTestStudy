#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<long long> dec;	// 감소하는 수들

	for (int i = 1; i <= 1023; i++) {	// {0,1,2,3,..,9}의 공집합이 아닌 부분집합을 뽑아내기 위해서.
		long long num = 0;	// i에 대응되는 감소하는 수
		int tmp_i = i;
		for (int idx = 9; idx >= 0; idx--) {
			if (tmp_i % 2 == 1)
				num = 10 * num + idx;	// idx를 1의 자리에 넣음
			tmp_i /= 2;
		}
		dec.push_back(num); // i에 대응되는 감소하는 수를 list에 넣음
	}

	sort(dec.begin(), dec.end());
	int N;
	cin >> N;
	if (N > 1022)
		cout << -1;
	else
		cout << dec[N];
}

