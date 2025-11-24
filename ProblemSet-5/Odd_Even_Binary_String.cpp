#include <bits/stdc++.h>
using namespace std;

// Phitron Speed Contest 4

// Problem C

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                cnt++;
            }
        }

        if (cnt % 2 == 0)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}