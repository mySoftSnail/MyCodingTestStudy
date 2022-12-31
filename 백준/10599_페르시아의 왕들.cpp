#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    while (1) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (!a && !b && !c && !d) break;

        cout << c - b << ' ' << d - a << '\n';
    }
}
