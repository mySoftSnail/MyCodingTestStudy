#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int n, k;
vector<pair<int, int>> apples;
int l;
queue<pair<int, char>> moveinfo;
int sec = 0;
pair<int, int> head = { 0,0 };
deque<pair<int, int>> body;
int dir = 0; // 동0 남1 서2 북3

void moveForward() {
	int dr, dc;
	dr = dc = 0;
	switch (dir) {
	case 0:
		dc = 1;
		break;
	case 1:
		dr = 1;
		break;
	case 2:
		dc = -1;
		break;
	case 3:
		dr = -1;
		break;
	}
	head.X += dr;
	head.Y += dc;
}

bool touch() {
	int x = head.X;
	int y = head.Y;

	if (x < 0 || y < 0 || x >= n || y >= n) return true;

	int len = body.size();
	for (int i = 0; i < len; ++i) 
		if ((body[i].X == x) && (body[i].Y == y)) return true;

	return false;
}

bool eatApple() {
	int len = apples.size();
	for (int i = 0; i < len; ++i) {
		if ((apples[i].X == head.X) && (apples[i].Y == head.Y)) {
			apples.erase(apples.begin() + i);
			return true;
		}
	}
	return false;
}

void rotate(char LD) {
	if (LD == 'L') { // 왼쪽으로 향하기
		switch (dir) {
		case 0:
			dir = 3;
			break;
		case 1:
			dir = 0;
			break;
		case 2:
			dir = 1;
			break;
		case 3:
			dir = 2;
			break;
		}
	}
	if (LD == 'D') { // 오른쪽으로 향하기
		switch (dir) {
		case 0:
			dir = 1;
			break;
		case 1:
			dir = 2;
			break;
		case 2:
			dir = 3;
			break;
		case 3:
			dir = 0;
			break;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> k;
	for (int i = 0; i < k; ++i) {
		int x, y;
		cin >> x >> y;
		apples.push_back({ x - 1, y - 1 });
	}
	cin >> l;
	for (int i = 0; i < l; ++i) {
		int x;
		char c;
		cin >> x >> c;
		moveinfo.push({ x, c });
	}
	
	body.push_back(head);

	while (true) {
		sec++;

		moveForward();

		if (touch()) break;

		body.push_back(head);
		if (!eatApple()) {
			if (body.size() >= 1) {
				body.pop_front();
			}
		}
	
		if ((!moveinfo.empty()) && (sec == moveinfo.front().first)) {
			rotate(moveinfo.front().second);
			moveinfo.pop();
		}
	}

	cout << sec;

	return 0;
}