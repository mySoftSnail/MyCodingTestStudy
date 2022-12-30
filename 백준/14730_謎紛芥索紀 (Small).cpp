#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    int res = 0;

    while (n--) {
        int c, k;
        cin >> c >> k;
        res += c * k;
    }
    cout << res;
}
