#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    while(1) {
        cin >> n;
        if (n == -1) break;

        vector<int> vec;
        int sum = 0;
        for (int i = 1; i <= n/2; ++i) {
            if (n % i == 0) {
                sum += i;
                vec.push_back(i);
            }
        }
        if (sum == n) {
            cout << n << " = ";
            for (int i = 0; i <= vec.size() - 1; ++i) {
                cout << vec[i];
                if(i!=vec.size()-1)
                    cout << " + ";
            }
            cout << '\n';
        }
        else
            cout << n << " is NOT perfect.\n";
    }
}
