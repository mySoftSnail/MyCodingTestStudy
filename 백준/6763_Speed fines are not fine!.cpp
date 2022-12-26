#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int limit, speed;
    cin >> limit >> speed;
    int F;

    if (speed - limit >= 1) {
        if ((speed - limit) >= 31) {
            F = 500;
        }
        else if ((speed - limit) >= 21) {
            F = 270;
        }
        else {
            F = 100;
        }
        cout << "You are speeding and your fine is $" << F << ".";
    }
    else {
        cout << "Congratulations, you are within the speed limit!";
    }
}
