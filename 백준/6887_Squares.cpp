#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int i = 1;
    while (i * i <= n) i++;
    i--;

    cout << "The largest square has side length " << i << ".";

}