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
	sort(leave.begin(), leave.end(), greater<string>());
	
	int elen = enter.size();
	int llen = leave.size();
	int eidx = 0;
	int lidx = 0;

	while (eidx <= elen - 1 && lidx <= llen - 1) {
		if (enter[eidx] == leave[lidx]) {
			eidx++;
			lidx++;
		}
		else {
			cout << enter[eidx] << '\n';
			eidx++;
		}
	}

	for (int i = eidx; i <= elen - 1; ++i)
		cout << enter[i] << '\n';

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