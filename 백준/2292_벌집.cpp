#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int RoomCount = 1;

	while (n > 1)
	{
		n -= RoomCount * 6;
		RoomCount++;
	}

	cout << RoomCount;

	return 0;
}