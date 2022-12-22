#include <bits/stdc++.h>
using namespace std;

class bigInt {
private:
	int num[40];

public:
	bigInt() {
		for (int i = 0; i < 40; ++i)
			num[i] = 0;
	}

	void one() { num[0] = 1; }

	bigInt operator+(bigInt& bigN) {
		for (int i = 0; i < 39; ++i) {
			num[i] += bigN.num[i];
			num[i + 1] += num[i] / 10;
			num[i] %= 10;
		}
		return *this;
	}

	void print() {
		int i = 40;
		while (!num[--i]);
		while (i >= 0)
			cout << num[i--];
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	vector<vector<bigInt>> comb(n + 1, vector<bigInt>(n + 1));

	for (int i = 1; i <= n; ++i) {
		comb[i][0].one();
		comb[i][i].one();
		for (int j = 1; j < i; ++j) {
			comb[i][j] = comb[i - 1][j - 1] + comb[i - 1][j];
		}
	}

	comb[n][m].print();
}