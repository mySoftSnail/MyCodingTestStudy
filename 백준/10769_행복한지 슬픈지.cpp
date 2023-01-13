#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    getline(cin, str);

    int happy, sad;
    happy = sad = 0;

    int i = -1;
    while (1) {
        i = str.find(":-)", i + 1);
        if (i == -1) break;
        happy++;
    }

    i = -1;
    while (1) {
        i = str.find(":-(", i + 1);
        if (i == -1) break;
        sad++;
    }

    if (!happy && !sad) cout << "none";
    else if (happy == sad) cout << "unsure";
    else if (happy > sad) cout << "happy";
    else cout << "sad";
}