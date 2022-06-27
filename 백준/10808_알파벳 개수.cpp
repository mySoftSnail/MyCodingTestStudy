#include <bits/stdc++.h>
using namespace std;

int freq[26]; // 전역에 선언하면 0으로 초기화됨
int main()
{
	string str;
	cin >> str;

	for (auto c : str)
		freq[c - 'a']++;
	
	for (auto c : freq)
		cout << c << ' ';

	return 0;
}