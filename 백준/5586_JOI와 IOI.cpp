#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string str;
    cin >> str;

    int j, i;
    j = i = 0;

    int x = -1;
    while (1) {
        x = str.find("JOI", x + 1);
        if (x == -1) break;
        j++;
    }
    x = -1;
    while (1) {
        x = str.find("IOI", x + 1);
        if (x == -1) break;
        i++;
    }

    cout << j << '\n' << i;
}
