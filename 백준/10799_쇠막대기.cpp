#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	stack<char> S;
	string str;
	cin >> str;

	int len = str.size();
	int res = 0;

	for (int i = 0; i < len; ++i) {
		if (str[i] == '(') {
			S.push(str[i]);
		}
		else {	// c == ')'
			if (str[i - 1] == '(') {	// ������
				S.pop();
				res += S.size();
			}

			else {	// ������ ��
				S.pop();
				res++;	// ���� ���� �� ���� �߰��� �Ͱ� ����
			}
		}
	}
	cout << res;

	return 0;
}
