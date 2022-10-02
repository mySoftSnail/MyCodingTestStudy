#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double a, b;
    cin >> a >> b;

    double x = a * (100 - b) / 100;

    if (x >= 100) cout << 0;
    else cout << 1;
}