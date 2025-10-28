#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/contest/761292#problem/A

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int deadline = z * 24 * 60;

        int assign_time = x * y;

        if (assign_time <= deadline)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}