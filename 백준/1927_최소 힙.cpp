#include <bits/stdc++.h>
using namespace std;

// �迭�� ������� ����, �ּڰ� Ȯ��, �ּڰ� ���� ����� �����ϴ� �ּ� �� �����

int heap[100005];
int sz = 0; // heap�� ����ִ� ������ ��

void push(int x) { // �� �ֱ�
	heap[++sz] = x;
	int idx = sz;
	while (idx != 1) {
		int par = idx / 2;
		if (heap[par] <= heap[idx]) break; // �θ� �� �۰ų� ������ �ߴ�
		swap(heap[par], heap[idx]); // �׷��� ������(�θ� �� ũ��) �θ�� ��ȯ�� ���� �ö󰡱�
		idx = par;
	}
}

int top() { // �ּҰ� ��ȯ
	if (sz == 0) return 0;

	return heap[1];
}

void pop() { // �ּҰ� ����
	if (sz == 0) return;

	heap[1] = heap[sz--]; // ��Ʈ ����

	int idx = 1;
	// ���� �ڽ��� �ε���(2*idx)�� sz���� ũ�� idx�� ����
	while (2 * idx <= sz) { // ������ �ƴ� ����
		int lc = 2 * idx, rc = 2 * idx + 1; // ���� �ڽ�, ������ �ڽ�
		int min_child = lc; // �� �ڽ� �� ���� �ε����� ���� ����
		if (rc <= sz && heap[rc] < heap[lc]) // ������ �ڽ��� �ִ��� Ȯ���ؾ� ��
			min_child = rc;
		if (heap[idx] <= heap[min_child]) break; // �ڽĺ��� ũ�� �ʴٸ� �ߴ�
		swap(heap[idx], heap[min_child]);
		idx = min_child;
	}
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if (x) {
			push(x);
		}
		else {
			cout << top() << '\n';
			pop();
		}
	}
}