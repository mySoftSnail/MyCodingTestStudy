#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int time = 0;

    if (a < 0) {
        while (a < 0) {
            time += c;
            a++;
        }
        time += d;
        time += (b - a) * e;
    }
    else {
        time = (b - a) * e;
    }

    cout << time;
}

