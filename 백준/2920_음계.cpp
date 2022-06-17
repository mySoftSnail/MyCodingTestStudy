#include <iostream>
#include <string>
using namespace std;

int main()
{
	string result;

	int v;
	cin >> v;
	if (v == 1) { result = "ascending"; }
	if (v == 8) { result = "descending"; }

	for (int i = 0; i < 7; ++i)
	{
		int newv;
		cin >> newv;
		if (((result == "ascending") && (newv > v)) || ((result == "descending") && (newv < v)))
		{
			v = newv;
		}
		else
		{
			result = "mixed";
			break;
		}
	}

	cout << result;

	return 0;
}