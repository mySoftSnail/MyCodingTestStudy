#include <bits/stdc++.h>
using namespace std;

int l, p;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> l >> p;

    int people = l * p;
    for (int i = 0; i < 5; ++i) {
        int x;
        cin >> x;
        cout << x - people << ' ';
    }
}