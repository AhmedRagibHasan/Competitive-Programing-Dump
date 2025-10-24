#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int p, q, r, s;

        cin >> p >> q >> r >> s;

        vector<int> a;

        a.push_back(p);
        a.push_back(q);
        a.push_back(r);

        a.push_back(s);

        sort(a.begin(), a.end());

        int m = a[3];

        int t = p + q + r + s;

        if (m > t / 2)
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