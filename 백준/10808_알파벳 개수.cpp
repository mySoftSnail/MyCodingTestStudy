#include <bits/stdc++.h>
using namespace std;

int freq[26]; // ������ �����ϸ� 0���� �ʱ�ȭ��
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