#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int input[102][102], board[102][102];
int n, maxh;

void rain(int r) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            board[i][j] = (input[i][j] > r);
}

int bfs() {
    int res = 0;

    int tmp[102][102];
    memcpy(tmp, board, sizeof(tmp));

    queue<pair<int, int>> q;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (tmp[i][j] == 1) {
                tmp[i][j] = -1;
                q.push({ i,j });
                res++;
                while (!q.empty()) {
                    auto cur = q.front();
                    q.pop();
                    for (int d = 0; d < 4; ++d) {
                        int nx = cur.X + dx[d];
                        int ny = cur.Y + dy[d];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                        if (tmp[nx][ny] != 1) continue;
                        tmp[nx][ny] = -1;
                        q.push({ nx,ny });
                    }
                }
            }
        }
    }

    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ans = -1;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> input[i][j];
            maxh = max(maxh, input[i][j]);
        }
    }

    for (int r = 0; r <= maxh; ++r) {
        rain(r);
        ans = max(ans, bfs());
    }

    cout << ans;
}

