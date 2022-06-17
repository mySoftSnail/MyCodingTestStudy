#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int* a = new int[n];
    
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int max, min;
    max = 2;
    min = 100000;
    for (int i=0; i<n; ++i)
    {
        if (a[i] < min) { min = a[i]; }
        if (a[i] > max) { max = a[i]; }
    }

    cout << max * min;

    return 0;
}