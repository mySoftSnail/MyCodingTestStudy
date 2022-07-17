#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int home2school;
	int school2pc;
	int pc2academy;
	int academy2home;

	cin >> home2school >> school2pc >> pc2academy >> academy2home;

	int sec = home2school + school2pc + pc2academy + academy2home;

	cout << sec / 60 << '\n' << sec % 60;

	return 0;
}