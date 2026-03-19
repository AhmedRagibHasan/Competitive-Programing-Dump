#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x;
    cin >> x;

    int left = x - 100;

    int popcnt = 0;

    while (left >= 50)
    {
        if (left >= 50)
        {
            popcnt++;
        }
        left = left - 50;
    }

    cout << popcnt << "\n";

    return 0;
}