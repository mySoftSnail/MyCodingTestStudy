#include <bits/stdc++.h>
using namespace std;

int box[52];
int book[52];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int capacity = 0;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> box[i];
		capacity += box[i];
	}

	for (int i = 0; i < m; ++i)
		cin >> book[i];

	int i = 0;
	int k = 0;
	while (k < m) {
		if (box[i] >= book[k]) {
			capacity -= book[k];
			k++;
		}
		else i++;
	}

	cout << capacity;

	return 0;
}