#include <bits/stdc++.h>
using namespace std;

// CF-*800

int LCM(int a, int b)
{

    return (a / __gcd(a, b)) * b;
}

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        long long l, r;

        cin >> l >> r;

        long long x = l;

        long long y = l * 2;

        if (y <= r)
        {
            cout << x << " " << y << "\n";
        }
        else
        {
            cout << -1 << " " << -1 << "\n";
        }
    }
    return 0;
}
