#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int Up, Down, Top;

	cin >> Up >> Down >> Top;

	if (Up == Top)
	{
		cout << 1 << '\n';
	}
	else
	{
		double dUp = static_cast<double>(Up);
		double dDown = static_cast<double>(Down);
		double dTop = static_cast<double>(Top);

		int Days = static_cast<int>(ceil((dTop - dUp) / (dUp - dDown))) + 1;
	
		cout << Days << '\n';
	}

	return 0;
}