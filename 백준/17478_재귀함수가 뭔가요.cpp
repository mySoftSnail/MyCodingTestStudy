#include <bits/stdc++.h>
using namespace std;

void func(int n, int x) {
	for (int i = 0; i < x; ++i) cout << '_';
	cout << "\"����Լ��� ������?\"\n";

	if (n == 0) {
		for (int i = 0; i < x; ++i) cout << '_';
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";

		for (int i = 0; i < x; ++i) cout << '_';
		cout << "��� �亯�Ͽ���.\n";

		return;
	}

	for (int i = 0; i < x; ++i) cout << '_';
	cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";

	for (int i = 0; i < x; ++i) cout << '_';
	cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";

	for (int i = 0; i < x; ++i) cout << '_';
	cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";

	func(n - 1, x + 4);

	for (int i = 0; i < x; ++i) cout << '_';
	cout << "��� �亯�Ͽ���.\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";

	func(n, 0);

	return 0;
}
