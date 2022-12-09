#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;

    ll l = max(n, m);
    ll s = min(n, m);

    ll tile1 = (l / 2) * s;
    ll tile2 = (l % 2) * (s / 2);
    cout << tile1 + tile2;
}
