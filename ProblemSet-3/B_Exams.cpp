#include <bits/stdc++.h>
using namespace std;

// https://vjudge.net/contest/761292#problem/B

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

        int stu = x * y;

        

        

        if (z > stu/2)
        {
            cout << "YES" << '\n';
        }
        else if(z <= stu/2)
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}