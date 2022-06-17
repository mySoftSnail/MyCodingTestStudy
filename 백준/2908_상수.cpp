#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int a_sang = ((a % 10) * 100) + (((a / 10) % 10) * 10) + (a / 100);
	int b_sang = ((b % 10) * 100) + (((b / 10) % 10) * 10) + (b / 100);

	cout << max(a_sang, b_sang);

	return 0;
}