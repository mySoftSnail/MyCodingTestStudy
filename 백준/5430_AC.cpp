#include <bits/stdc++.h>
using namespace std;

void parse(string& tmp, deque<int>& d) {
	int cur = 0;
	for (int i = 1; i < tmp.size() - 1; ++i) {
		if (tmp[i] == ',') {
			d.push_back(cur);
			cur = 0;
		}
		else {
			cur = 10 * cur + (tmp[i] - '0');
		}
	}
	if (cur != 0) d.push_back(cur);
}

void print_result(deque<int>& d) {
	cout << '[';
	for (int i = 0; i < d.size(); ++i) {
		cout << d[i];
		if (i + 1 != d.size())
			cout << ',';
	}
	cout << "]\n";
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int t; cin >> t;
	while (t--) {
		string func;
		cin >> func;

		int n;
		cin >> n;

		deque<int> d;
		string nums;
		cin >> nums;
		parse(nums, d);

		bool error = false;
		int rev = 0;
		for (char op : func) {

			if (op == 'R') {
				rev = 1 - rev;
			}
			else if (op == 'D') {
				if (d.empty()) {
					error = true;
					break;
				}
				if (!rev) d.pop_front();
				else if (rev) d.pop_back();
			}
		}

		if (error) cout << "error\n";
		else {
			if (rev) reverse(d.begin(), d.end());
			print_result(d);
		}
	}

	return 0;
}