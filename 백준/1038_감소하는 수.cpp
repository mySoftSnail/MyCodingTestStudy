#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<long long> dec;	// �����ϴ� ����

	for (int i = 1; i <= 1023; i++) {	// {0,1,2,3,..,9}�� �������� �ƴ� �κ������� �̾Ƴ��� ���ؼ�.
		long long num = 0;	// i�� �����Ǵ� �����ϴ� ��
		int tmp_i = i;
		for (int idx = 9; idx >= 0; idx--) {
			if (tmp_i % 2 == 1)
				num = 10 * num + idx;	// idx�� 1�� �ڸ��� ����
			tmp_i /= 2;
		}
		dec.push_back(num); // i�� �����Ǵ� �����ϴ� ���� list�� ����
	}

	sort(dec.begin(), dec.end());
	int N;
	cin >> N;
	if (N > 1022)
		cout << -1;
	else
		cout << dec[N];
}

