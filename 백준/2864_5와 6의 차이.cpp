#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string A, B, bigA, smallA, bigB, smallB;

    cin >> A >> B;

    bigA = A;
    for (int i = 0; i < bigA.size(); ++i) {
        if (bigA[i] == '5')
            bigA[i] = '6';
    }
    smallA = A;
    for (int i = 0; i < smallA.size(); ++i) {
        if (smallA[i] == '6')
            smallA[i] = '5';
    }
    bigB = B;
    for (int i = 0; i < bigB.size(); ++i) {
        if (bigB[i] == '5')
            bigB[i] = '6';
    }

    smallB = B;
    for (int i = 0; i < smallB.size(); ++i) {
        if (smallB[i] == '6')
            smallB[i] = '5';
    }

    cout << stoi(smallA) + stoi(smallB) << ' ' << stoi(bigA) + stoi(bigB);

}

