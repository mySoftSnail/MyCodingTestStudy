#include <bits/stdc++.h>
using namespace std;

int n;
int d[21], p[16], t[16];
// d[i]: i번째 일에 상담을 시작했을 때 얻을 수 있는 최대 수익

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> t[i] >> p[i];

    for (int i = n; i >= 1; --i) {
        if (i + t[i] <= n + 1) { // i번째 일에 상담을 할 수 있는가?
            d[i] = max(d[i + t[i]] + p[i], d[i + 1]);
            // i번째 일에 상담을 했을 때와 상담을 하지 않았을 때 얻을 수 있는 수익 중 최대 수익을 취함
        }
        else d[i] = d[i + 1];
    }

    cout << *max_element(d, d + n + 1);
}