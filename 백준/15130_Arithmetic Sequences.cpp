#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ai, bi;
    int a, b, cnt;
    a = b = cnt = 0;
    int arr[10] = { 0, };
    for (int i = 0; i < 10; ++i) {
        if (a && !b) cnt++;
        int x;
        cin >> x;
        if (x != 0) {
            if (a == 0) {
                ai = i;
                a = x;
            }
            else {
                bi = i;
                b = x;
            }
        }
        arr[i] = x;
    }


    if (((b - a) % cnt) != 0) {
        cout << -1;
    }
    else {
        int d = (b - a) / cnt;
        for (int i = 0; i < 10; ++i) {
            if (i != ai) {
                arr[i] = d * (i - ai) + a;
            }
            cout << arr[i] << ' ';
        }
    }
}