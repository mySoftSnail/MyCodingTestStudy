#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, w, l;
	cin >> n >> w >> l;

	// 무게, 움직인 거리
	deque<pair<int, int>> bridge;
	int b_weight = 0;
	queue<int> trucks;

	for (int i = 0; i < n; ++i) {
		int tmp;
		cin >> tmp;
		trucks.push(tmp);
	}

	int time = 1;
	while (!trucks.empty() || !bridge.empty()) {
		time++;

		if (!trucks.empty() && (b_weight + trucks.front() <= l)) {
			bridge.push_back({ trucks.front(), 1 });
			b_weight += bridge.back().first;
			trucks.pop();
		}

		if (!bridge.empty()) {
			for (int i = 0; i < bridge.size(); ++i) {
				bridge[i].second += 1;
				if (bridge[i].second > w) {
					b_weight -= bridge[i].first;
					bridge.pop_front();
					i--;
				}
			}
		}
	}

	cout << time;

	return 0;
}