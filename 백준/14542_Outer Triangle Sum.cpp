#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int Case = 1;
    while (1) {
        int n;
        cin >> n;
        if (!n) break;

        int sum = 0;
        int idx = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= i; ++j) {
                int x;
                cin >> x;
                if (j == 0 || j == idx || i == n - 1) 
                    sum += x;
            }
            idx++;
        }

        cout << "Case #" << Case << ":" << sum << '\n';
        Case++;
    }
}
