#include <bits/stdc++.h>
using namespace std;

// 배열을 기반으로 삽입, 최솟값 확인, 최솟값 삭제 기능을 제공하는 최소 힙 만들기

int heap[100005];
int sz = 0; // heap에 들어있는 원소의 수

void push(int x) { // 값 넣기
	heap[++sz] = x;
	int idx = sz;
	while (idx != 1) {
		int par = idx / 2;
		if (heap[par] <= heap[idx]) break; // 부모가 더 작거나 같으면 중단
		swap(heap[par], heap[idx]); // 그렇지 않으면(부모가 더 크면) 부모와 교환해 위로 올라가기
		idx = par;
	}
}

int top() { // 최소값 반환
	if (sz == 0) return 0;

	return heap[1];
}

void pop() { // 최소값 제거
	if (sz == 0) return;

	heap[1] = heap[sz--]; // 루트 제거

	int idx = 1;
	// 왼쪽 자식의 인덱스(2*idx)가 sz보다 크면 idx는 리프
	while (2 * idx <= sz) { // 리프가 아닐 동안
		int lc = 2 * idx, rc = 2 * idx + 1; // 왼쪽 자식, 오른쪽 자식
		int min_child = lc; // 두 자식 중 작은 인덱스를 담을 예정
		if (rc <= sz && heap[rc] < heap[lc]) // 오른쪽 자식이 있는지 확인해야 함
			min_child = rc;
		if (heap[idx] <= heap[min_child]) break; // 자식보다 크지 않다면 중단
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