#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int h, w, n;

		cin >> h >> w >> n;

		int Floor = (n % h == 0) ? (h) : (n % h);

		int Room = (n % h == 0) ? (n / h) : (n / h + 1);

		cout << Floor;
		if (Room < 10)
		{
			cout << '0';
		}
		cout << Room << '\n';

	}

	return 0;
}