#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n;
ll t[1500003], p[1500003], d[1500003];

// d[i] : i-1��° ������ ����� ���� �� �� �� �ִ� �ִ� �ݾ�

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> t[i] >> p[i];

    for (int i = 1; i <= n; ++i) {
        // d[i]�� Ȯ��
        d[i] = max(d[i], d[i - 1]);

        // i��° �� ����� �� ��� i+t[i]-1�� ����� ����Ǵ� ��
        if (i + t[i] - 1 <= n) // ����� n�� ������ ����� ���
            d[i + t[i]] = max(d[i + t[i]], d[i] + p[i]); // d[i+t[i]] ����
    }
    cout << max(d[n], d[n + 1]);

}   