#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int ans;
    cin >> ans;

    while (1) {
        char op;
        cin >> op;
        if (op == '=') break;

        int x;
        cin >> x;

        switch (op) {
        case '+':
            ans += x;
            break;
        case '-':
            ans -= x;
            break;
        case '*':
            ans *= x;
            break;
        case '/':
            ans /= x;
            break;
        }
    }

    cout << ans;
}
