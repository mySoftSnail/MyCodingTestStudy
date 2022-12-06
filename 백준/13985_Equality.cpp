#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string str;
    getline(cin, str);

    int a = str[0] - '0';
    int b = str[4] - '0';
    int c = str[8] - '0';

    if (a + b == c)
        cout << "YES";
    else
        cout << "NO";
}