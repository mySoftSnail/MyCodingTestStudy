#include <bits/stdc++.h>
using namespace std;

int freq[82];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    for (int i = 1; i <= s1; ++i) 
        for (int j = 1; j <= s2; ++j) 
            for (int k = 1; k <= s3; ++k) 
                freq[i + j + k]++;

    int mx = *max_element(freq, freq + 82);
    for (int i = 0; i <= 81; ++i) {
        if (freq[i] == mx) {
            cout << i;
            break;
        }
    }
}

