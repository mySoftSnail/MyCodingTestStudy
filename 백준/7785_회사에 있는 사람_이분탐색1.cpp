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

	sort(enter.begin(), enter.end(), greater<string>());
	sort(leave.begin(), leave.end());

	for (auto it = enter.begin(); it != enter.end(); ++it) {
		auto erange = equal_range(leave.begin(), leave.end(), *it);
		int lidx = erange.first - leave.begin();
		int uidx = erange.second - leave.begin();
		if (lidx != uidx) {
			leave.erase(leave.begin() + lidx);
		}
		else cout << *it << '\n';
	}
}

/*
7
Baha enter
Askar enter
Baha leave
Artem enter
Artem leave
Baha enter
Baha leave


*/