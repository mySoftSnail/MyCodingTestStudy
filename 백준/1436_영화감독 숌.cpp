#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	vector<int> Titles;

	string TitleString = "0000";

	for (int FirstDigit = 0; FirstDigit <= 9; ++FirstDigit)
	{
		TitleString.replace(0, 1, to_string(FirstDigit));

		for (int SecondDigit = 0; SecondDigit <= 9; ++SecondDigit)
		{
			TitleString.replace(1, 1, to_string(SecondDigit));

			for (int ThirdDigit = 0; ThirdDigit <= 9; ++ThirdDigit)
			{
				TitleString.replace(2, 1, to_string(ThirdDigit));

				for (int FourthDigit = 0; FourthDigit <= 9; ++FourthDigit)
				{
					TitleString.replace(3, 1, to_string(FourthDigit));

					for (int SixPosition = 0; SixPosition <= 4; ++SixPosition)
					{
						string Temp = TitleString;
						Temp.insert(SixPosition, "666");
						Titles.push_back(stoi(Temp));
					}
				}
			}
		}
	}

	sort(Titles.begin(), Titles.end());
	Titles.erase(unique(Titles.begin(), Titles.end()), Titles.end());
	
	cout << Titles[N - 1];

	return 0;
}