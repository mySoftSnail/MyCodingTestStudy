#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool isUsed[10];

void func(int k) {		// ���� k������ ���� ������.
	if (k == m) {		// m���� ��� ��������
		for (int i = 0; i < m; ++i)
			cout << arr[i] << ' ';		// arr�� ����ص� ���� ���
		cout << '\n';
		return;
	}

	for (int i = 1; i <= n; ++i) {		// 1���� n������ ���� ����
		if (!isUsed[i]) {				// ���� i�� ������ �ʾ�����
			arr[k] = i;			// k��° ���� i�� ����
			isUsed[i] = 1;		// i�� ���Ǿ��ٰ� ǥ��
			func(k + 1);		// ���� ���� ���Ϸ� �� �ܰ� �� ��
			isUsed[i] = 0;		// k��° ���� i�� ���� ��� ��쿡 ���� �� Ȯ�������� i�� ���� ������ �ʾҴٰ� �����.
		}
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	func(0);

	return 0;
}