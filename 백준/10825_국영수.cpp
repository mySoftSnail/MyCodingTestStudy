#include <bits/stdc++.h>
using namespace std;

int N;
tuple<string, int, int, int> stud[100000];

bool comp(const tuple<string, int, int, int> &a, const tuple<string, int, int, int> &b) {
	string name_a, name_b;
	int k_a, y_a, s_a, k_b, y_b, s_b;
	tie(name_a, k_a, y_a, s_a) = a;
	tie(name_b, k_b, y_b, s_b) = b;

	if (k_a != k_b) return k_a > k_b;
	else {
		if (y_a != y_b) return y_a < y_b;
		else if (s_a != s_b) return s_a > s_b;
	}
	return name_a < name_b;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; ++i) {
		string name;
		int k, y, s;
		cin >> name >> k >> y >> s;
		stud[i] = { name, k, y, s };
	}

	sort(stud, stud + N, comp);

	for (int i = 0; i < N; ++i)
		cout << get<0>(stud[i]) << '\n';

	return 0;
}