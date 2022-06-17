#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double Score[1000] = { 0.0 };

	int n;
	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> Score[i];
	}

	double MaxScore = Score[0];
	for (int i = 1; i < n; ++i)
	{
		if (Score[i] > MaxScore) MaxScore = Score[i];
	}

	double Sum = 0.0;
	for (int i = 0; i < n; ++i)
	{
		Score[i] = Score[i] / MaxScore * 100.0;
		Sum += Score[i];
	}

	cout << fixed << setprecision(5);
	cout << Sum / n;

	return 0;
}