#include <bits/stdc++.h>
using namespace std;

int n;
int lc[30];
int rc[30];

void preorder(int cur) {
	cout << char(cur + 'A');
	if (lc[cur]) preorder(lc[cur]);
	if (rc[cur]) preorder(rc[cur]);
}

void inorder(int cur) {
	if (lc[cur]) inorder(lc[cur]);
	cout << char(cur + 'A');
	if (rc[cur]) inorder(rc[cur]);
}

void postorder(int cur) {
	if (lc[cur]) postorder(lc[cur]);
	if (rc[cur]) postorder(rc[cur]);
	cout << char(cur + 'A');
}

int main() {
	cin.tie(0)->sync_with_stdio(0);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		char c, l, r;
		cin >> c >> l >> r;
		if (l != '.')
			lc[c - 'A'] = l - 'A';
		if (r != '.')
			rc[c - 'A'] = r - 'A';
	}

	preorder(0);
	cout << '\n';
	inorder(0);
	cout << '\n';
	postorder(0);
}

