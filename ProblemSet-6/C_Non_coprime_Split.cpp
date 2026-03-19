#include <bits/stdc++.h>
using namespace std;

void solve(int t)
{
    int l, r;
    cin >> l >> r;

    if (r <= 3)
    {
        cout << -1 << "\n";
    }

    else if (l == r && r % 2 == 1)
    {
        long long x = sqrtl(r);
        for (int i = 2; i <= x; i++)
        {
            if (r % i == 0)
            {
                cout << i << " " << r - i << "\n";
                return;
            }
        }
        cout << -1 << "\n";
    }
    else
    {
        cout << r / 2 << " " << r / 2 << "\n";
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        solve(t);
    }
    return 0;
}