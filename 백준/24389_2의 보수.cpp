#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n;
    cin >> n;

    bitset<32> bit;
    bit.reset();

    vector<ll> tsq(32);
    tsq[0] = 1;
    for (int i = 1; i <= 31; ++i) 
        tsq[i] = tsq[i - 1] * 2;

    for (int i = 31; i >= 0; --i) {
        if (n >= tsq[i]) {
            n -= tsq[i];
            bit.set(i, true);
        }
    }

    bitset<32> tmp(bit);
    ll flipN = tmp.flip().to_ulong();
    flipN++;

    bitset<32> cbit;
    cbit.reset();
    for (int i = 31; i >= 0; --i) {
        if (flipN >= tsq[i]) {
            flipN -= tsq[i];
            cbit.set(i, true);
        }
    }

    int cnt = 0;
    for (int i = 0; i < 32; ++i) 
        if (bit[i] ^ cbit[i]) cnt++;
    cout << cnt;

}