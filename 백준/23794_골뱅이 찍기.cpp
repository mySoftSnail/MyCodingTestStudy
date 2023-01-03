#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n + 2; ++i)
        cout << '@';
    cout << '\n';

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n + 2; ++i) {
            if (i == 0 || i == n + 1)
                cout << '@';
            else
                cout << ' ';
        }
        cout << '\n';
    }

    for (int i = 0; i < n + 2; ++i)
        cout << '@';
    cout << '\n';

}