#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int ans = 0;
	int n;
	cin >> n;
	while (n--) {
		string word;
		cin >> word;
		
		set<char> chars;
		chars.insert(word[0]);

		bool isGroupWord = true;
		for (int i = 1; i < word.size(); ++i) {
			if (word[i] != word[i - 1]) {
				if (chars.find(word[i]) != chars.end()) {
					isGroupWord = false;
					break;
				}
				else chars.insert(word[i]);
			}
		}
		ans += isGroupWord;
	}

	cout << ans;

	return 0;
}