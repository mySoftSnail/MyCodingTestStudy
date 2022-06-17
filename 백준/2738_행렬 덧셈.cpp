#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int* a, * b;
    int n, m;
    cin >> n >> m;
    a = new int[n * m];
    b = new int[n * m];

    int tmp;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {

            cin >> a[m * i + j];
            cout << "index:" << m * i + j << '\n';
            cout << "value: " << a[m * i + j] << '\n';
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> tmp;
            b[m * i + j] = tmp;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[m * i + j] + b[m * i + j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}