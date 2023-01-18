#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        string str;
        cin >> str;

        if ((str[str.size() - 1] - '0') % 2 == 0)
            cout << "even\n";
        else
            cout << "odd\n";
    }

}

