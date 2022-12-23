#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> d(n + 1, 0x7f7f7f7f);

    for (int i = 1; i * i <= n; ++i)
        d[i * i] = 1;

    for (int i = 2; i <= n; ++i) {
        if (d[i] == 1) continue;
        for (int j = 1; j * j <= i; ++j) {
            if (d[i - j * j] + 1 < d[i])
                d[i] = d[i - j * j] + 1;
        }
    }

    cout << d[n];
}