#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<bool> vec(21, false);
    int m;
    cin >> m;
    while (m--) {
        string op;
        cin >> op;

        if (op == "add") {
            int x; cin >> x;
            vec[x] = 1;
        }
        if (op == "remove") {
            int x; cin >> x;
            vec[x] = 0;
        }
        if (op == "check") {
            int x; cin >> x;
            if (vec[x])
                cout << "1\n";
            else
                cout << "0\n";
        }
        if (op == "toggle") {
            int x; cin >> x;
            if (vec[x])
                vec[x] = 0;
            else
                vec[x] = 1;
        }
        if (op == "all") {
            fill(vec.begin(), vec.end(), 1);
        }
        if (op == "empty") {
            fill(vec.begin(), vec.end(), 0);
        }
    }
}

