#include <bits/stdc++.h>
using namespace std;

vector<string> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	cin >> str;

	vector<int> permu(str.size() - 1);
	fill(permu.begin(), permu.end(), 1);
	fill(permu.begin(), permu.begin() + 2, 0);

	do {
		int cut1, cut2;
		cut1 = cut2 = -1;
		string word;
		for (int i = 0; i < permu.size(); ++i) {
			if (permu[i] == 0) {
				if (cut1 == -1) {
					cut1 = i + 1;
					string tmp = str.substr(0, cut1);
					reverse(tmp.begin(), tmp.end());
					word += tmp;
				}
				else {
					cut2 = i + 1;
					string tmp = str.substr(cut1, cut2 - cut1);
					reverse(tmp.begin(), tmp.end());
					word += tmp;
					tmp = str.substr(cut2, str.size() - cut2);
					reverse(tmp.begin(), tmp.end());
					word += tmp;

					v.push_back(word);
					break;
				}

			}
		}
	} while (next_permutation(permu.begin(), permu.end()));

	sort(v.begin(), v.end());

	cout << v[0];

	return 0;
}