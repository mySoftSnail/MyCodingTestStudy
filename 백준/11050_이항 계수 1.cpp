#include <iostream>
using namespace std;

int BC(int N, int K)
{
	if (K == 0) return 1;
	if (N == K) return 1;
	else return BC(N - 1, K - 1) + BC(N - 1, K);
}

int main()
{
	int N, K;
	cin >> N >> K;

	cout << BC(N, K);

	return 0;
}