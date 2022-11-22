#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int a[100003];

    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int ans = INT_MAX;
    for (int i = 0; i < n; ++i) {
        int x = -a[i];
        int idx = lower_bound(a, a + n, x) - a;
        if (idx >= n)
            idx = n - 1;

        if (idx == i) 
            continue;

        if (abs(a[i] + a[idx]) < abs(ans))
            ans = a[i] + a[idx];

        if (idx >= 1)
            idx -= 1;

        if (abs(a[i] + a[idx]) < abs(ans))
            ans = a[i] + a[idx];
    }

    cout << ans;
}