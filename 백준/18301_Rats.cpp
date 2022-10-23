#include <bits/stdc++.h>
using namespace std;

int n1, n2, n12;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n1 >> n2 >> n12;

	cout << floor((n1 + 1) * (n2 + 1) / (n12 + 1) - 1);

}

