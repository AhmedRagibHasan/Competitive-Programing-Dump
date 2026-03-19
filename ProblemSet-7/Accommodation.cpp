#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long int b, g, x, y, n;

        cin >> b >> g >> x >> y >> n;

        if (x + y > n)
        {
            cout << -1 << "\n";
            continue;
        }

        long long int minroom = (b + g + n - 1) / n;

        long long checkboys = (b + (n - y) - 1) / (n - y);
        long long checkgirls = (g + (n - x) - 1) / (n - x);

        minroom = max(minroom,max (checkboys, checkgirls));

        long long maxroom = min(b / x, g / y);

        if (minroom > maxroom)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << minroom << "\n";
        }
    }

    return 0;
}