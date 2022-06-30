#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);

	list<char> editor;

	string str;
	cin >> str;
	
	for (char c : str)
		editor.push_back(c);

	list<char>::iterator cursor = editor.end();

	int M; cin >> M;
	while (M--)
	{
		char op;
		cin >> op;

		switch (op)
		{
		case 'L':
			if (cursor != editor.begin())
				cursor--;
			break;

		case 'D':
			if (cursor != editor.end())
				cursor++;
			break;

		case 'B':
			if (cursor != editor.begin())
			{
				cursor--;
				cursor = editor.erase(cursor);
			}
			break;

		case 'P':
			char c;
			cin >> c;
			editor.insert(cursor, c);
			break;
		}
	}

	for (char c : editor)
		cout << c;

	return 0;
}
