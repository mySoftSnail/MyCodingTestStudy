#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double g, p;
    cin >> p >> g;

    double rate = p / g;

    int n;
    cin >> n;
    while (n--) {
        cin >> p >> g;
        rate = min(rate, p / g);
    }

    cout << setprecision(2) << fixed << 1000.0 * rate;
}