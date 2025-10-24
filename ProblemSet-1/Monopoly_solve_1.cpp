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

        // cout<<a[3]<<endl;

        if (a[0] + a[1] + a[2] < a[3])
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