#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

bool Comp(const string& A, const string& B)
{
	size_t ALength = A.size();
	size_t BLength = B.size();

	if (ALength == BLength)
	{
		return (A.compare(B) < 0) ? true : false;
	}
	return A.size() < B.size();
}

int main()
{
	int N;
	cin >> N;

	vector<string> WordVector;

	for (int i = 0; i <= N; ++i)
	{
		string str;
		getline(cin, str);
		WordVector.push_back(str);
	}

	sort(WordVector.begin(), WordVector.end(), Comp);

	int VectorLength = WordVector.size();
	string CheckRepeat = WordVector[0];
	for (int i = 1; i < VectorLength; ++i)
	{
		if (CheckRepeat != WordVector[i])
		{
			cout << WordVector[i] << '\n';
			CheckRepeat = WordVector[i];
		}
	}

	return 0;
}