#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	double D, H, W;
	cin >> D >> H >> W;

	double x = sqrt((D * D) / (H * H + W * W));

	int width = W * x;
	int height = H * x;

	cout << height << ' ' << width;

	return 0;
}