#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    while (1) {
        getline(cin, str);
        if (str == "END") break;
        reverse(str.begin(), str.end());
        cout << str << '\n';
    }
}

