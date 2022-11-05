#include <bits/stdc++.h>
using namespace std;

vector<string> enter, leave;

int main() {
	cin.tie(0)->sync_with_stdio(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string name, log;
		cin >> name >> log;
		if (log == "enter")
			enter.push_back(name);
		else
			leave.push_back(name);
	}

	sort(enter.begin(), enter.end());
	sort(leave.begin(), leave.end());

	string last;
	for (auto it = enter.rbegin(); it != enter.rend(); ++it) {
		auto erange = equal_range(enter.begin(), enter.end(), *it);
		int enter_cnt = erange.second - erange.first;
		erange = equal_range(leave.begin(), leave.end(), *it);
		int leave_cnt = erange.second - erange.first;

		if (enter_cnt > leave_cnt && last != *it) {
			cout << *it << '\n';
			last = *it;
		}
	}
}

/*

6
Baha enter
Askar enter
Baha leave
Artem enter
Artem leave
Baha enter


*/