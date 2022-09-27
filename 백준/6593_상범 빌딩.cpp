#include <bits/stdc++.h>
using namespace std;

int board[32][32][32];
int l, r, c;
int dx[6] = { 1, 0, -1, 0, 0, 0 };
int dy[6] = { 0, 1, 0, -1, 0, 0 };
int dz[6] = { 0, 0, 0, 0, 1, -1 };

bool OOB(int x, int y, int z) {
    return (x < 0 || y < 0 || z < 0 || x >= l || y >= r || z >= c);
}

void bfs(){
    string str;
    queue<tuple<int, int, int>> q;
    tuple<int, int, int> end;
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < r; ++j) {
            cin >> str;
            for (int k = 0; k < c; ++k) {
                if (str[k] == 'S') {
                    board[i][j][k] = 1;
                    q.push({ i,j,k });
                }
                else if (str[k] == '.') {
                    board[i][j][k] = 0;
                }
                else if (str[k] == '#') {
                    board[i][j][k] = -1;
                }
                else if (str[k] == 'E') {
                    board[i][j][k] = 0;
                    end = { i,j,k };
                }
            }
        }
    }

    while (!q.empty()) {
        auto cur = q.front();
        q.pop();

        for (int d = 0; d < 6; ++d) {
            int nx = get<0>(cur) + dx[d];
            int ny = get<1>(cur) + dy[d];
            int nz = get<2>(cur) + dz[d];

            if (OOB(nx, ny, nz) || board[nx][ny][nz] == -1 || board[nx][ny][nz] > 0) continue;

            board[nx][ny][nz] = board[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            q.push({ nx,ny,nz });
        }
    }

    if (board[get<0>(end)][get<1>(end)][get<2>(end)]) {
        cout << "Escaped in " << board[get<0>(end)][get<1>(end)][get<2>(end)] - 1 << " minute(s).\n";
    }
    else {
        cout << "Trapped!\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        cin >> l >> r >> c;
        if (!l && !r && !c) break;

        bfs();
    }
}