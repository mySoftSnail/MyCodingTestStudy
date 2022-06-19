#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int inv1, inv2, inv3;
	int a, b, c;

	while (true)
	{
		cin >> inv1 >> inv2 >> inv3;

		if (inv1 + inv2 + inv3 == 0) break;
		
		c = max({ inv1, inv2, inv3 });
		
		if (c == inv1)
		{
			a = inv2;
			b = inv3;
		}
		else if (c == inv2)
		{
			a = inv1;
			b = inv3;
		}
		else if (c == inv3)
		{
			a = inv1;
			b = inv2;
		}

		if ((c * c) == (a * a + b * b))
			cout << "right" << '\n';

		else 
			cout << "wrong" << '\n';
	}

	return 0;
}