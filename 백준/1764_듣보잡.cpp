#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<string, int> mp;
    int n, m;
    cin >> n >> m;
    while (n--) {
        string str;
        cin >> str;
        mp[str] = -1;
    }

    vector<string> ans;
    while (m--) {
        string str;
        cin >> str;
        if (mp[str] == -1)
            ans.push_back(str);
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for (auto x : ans)
        cout << x << '\n';
}