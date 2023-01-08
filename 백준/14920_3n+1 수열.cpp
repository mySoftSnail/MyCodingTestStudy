#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int f;
    cin >> f;

    if (f == 1) {
        cout << 1;
        return 0;
    }

    for (int i = 2; ; ++i) {
        if (f % 2 == 0) {
            f = f / 2;
        }
        else {
            f = 3 * f + 1;
        }
        if (f == 1) {
            cout << i;
            break;
        }
    }
}