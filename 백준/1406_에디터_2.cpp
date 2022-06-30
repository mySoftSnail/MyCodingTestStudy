#include <bits/stdc++.h>
using namespace std;

const int MX = 600'005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, int num) {
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];

    if (nxt[addr] != -1)
        pre[nxt[unused]] = unused;

    nxt[addr] = unused;
    unused++;
}

void erase(int addr) {
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1)
        pre[nxt[addr]] = pre[addr];
}

void traverse() {
    int cur = nxt[0];
    while (cur != -1) {
        cout << (char)dat[cur];
        cur = nxt[cur];
    }
    cout << "\n\n";
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);

    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);

    string str;
    cin >> str;

	int cursor = 0;
	for (auto c : str)
	{
		insert(cursor, c);
		cursor++;
	}
	
	int M; cin >> M;
	while (M--)
	{
		char op;
		cin >> op;

		switch (op)
		{
		case 'L':
			if (pre[cursor] != -1)
				cursor = pre[cursor];
			break;

		case 'D':
			if (nxt[cursor] != -1)
				cursor = nxt[cursor];
			break;

		case 'B':
			if (cursor != 0)
			{
				erase(cursor);
				cursor = pre[cursor];
			}
			break;

		case 'P':
			char c;
			cin >> c;
			insert(cursor, c);
			cursor = nxt[cursor];
			break;
		}
	}

	traverse();

	return 0;
}