#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<string, int> m;
        unordered_set<string> k;
        for (int i = 0; i < n; ++i) {
            string name, kind;
            cin >> name >> kind;
            k.insert(kind);
            m[kind]++;
        }

        int ans = 1;
        for (auto e : k)
            ans *= (m[e] + 1);
        cout << ans - 1 << '\n';

    }
}