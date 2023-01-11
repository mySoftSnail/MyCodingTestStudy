#include <bits/stdc++.h>
using namespace std;

int toNum(char c) {
    switch (c) {
    case '-':
        return 0;
    case '\\':
        return 1;
    case '(':
        return 2;
    case '@':
        return 3;
    case '?':
        return 4;
    case '>':
        return 5;
    case '&':
        return 6;
    case '%':
        return 7;
    case '/':
        return -1;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string str;
    while (1) {
        cin >> str;
        if (str == "#") break;

        int ans = 0;
        int exp = 1;
        for (int i = str.size() - 1; i >= 0; --i) {
            ans += toNum(str[i]) * exp;
            exp *= 8;
        }
        cout << ans << '\n';

    }
}