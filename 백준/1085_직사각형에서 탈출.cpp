#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	cout << min(min(abs(x - w), x), min(abs(h - y), y));

	return 0;
}