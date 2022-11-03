#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1) {
        string name;
        int age, weight;
        cin >> name >> age >> weight;

        if (!age) break;

        cout << name << ' ';
        if (age > 17 || weight >= 80)
            cout << "Senior\n";
        else
            cout << "Junior\n";
    }
}

