#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> cow(11, -1);

    int ans = 0;
    int n;
    cin >> n;
    while (n--) {
        int c, r;
        cin >> c >> r;

        if (cow[c] == -1)
            cow[c] = r;
        else {
            if (cow[c] != r)
                ans++;
            cow[c] = r;
        }
    }

    cout << ans;
}

