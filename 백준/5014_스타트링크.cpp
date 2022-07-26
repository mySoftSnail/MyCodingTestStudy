#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int floor, start, goal, up, down;
	cin >> floor >> start >> goal >> up >> down;

	int dx[2];
	dx[0] = up;
	dx[1] = -1 * down;

	int* building = new int[floor];
	fill(building, building + floor, -1);

	queue<int> Q;
	Q.push(start - 1);
	building[start - 1] = 0;

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();
		for (int i = 0; i < 2; ++i) {
			int nx = cur + dx[i];
			if (nx < 0 || nx >= floor) continue;
			if (building[nx] > -1) continue;
			building[nx] = building[cur] + 1;
			Q.push(nx);
		}
	}

	if (building[goal - 1] == -1)
		cout << "use the stairs";
	else
		cout << building[goal - 1];

	return 0;
}