#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n;
    cin >> m >> n;

    vector<int> vec;
    for (int i = 1; i <= n; ++i) {
        int x = i * i;
        if (x >= m && x <= n) {
            vec.push_back(x);
        }
    }

    if (vec.size() > 0) {
        cout << accumulate(vec.begin(), vec.end(), 0);
        cout << '\n' << *min_element(vec.begin(), vec.end());
    }
    else
        cout << "-1\n";

}