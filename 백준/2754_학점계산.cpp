#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	string str;
	cin >> str;

	float gpa = 0.f;
	
	switch (str[0]) {
	case 'A':
		gpa += 4.f;
		break;

	case 'B':
		gpa += 3.f;
		break;

	case 'C':
		gpa += 2.f;
		break;

	case 'D':
		gpa += 1.f;
		break;
	}

	switch (str[1]) {
	case '+':
		gpa += 0.3f;
		break;
	case '-':
		gpa -= 0.3f;
		break;
	}
	
	cout << setprecision(1);
	cout << fixed; // 실수 필드를 고정 소수점 방식으로 출력
	cout << gpa;

	return 0;
}