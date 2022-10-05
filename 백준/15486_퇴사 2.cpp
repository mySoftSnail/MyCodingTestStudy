#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n;
ll t[1500003], p[1500003], d[1500003];

// d[i] : i-1번째 날까지 상담을 했을 때 벌 수 있는 최대 금액

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> t[i] >> p[i];

    for (int i = 1; i <= n; ++i) {
        // d[i]값 확정
        d[i] = max(d[i], d[i - 1]);

        // i번째 날 상담을 할 경우 i+t[i]-1은 상담이 종료되는 날
        if (i + t[i] - 1 <= n) // 상담이 n일 이전에 종료될 경우
            d[i + t[i]] = max(d[i + t[i]], d[i] + p[i]); // d[i+t[i]] 갱신
    }
    cout << max(d[n], d[n + 1]);

}   