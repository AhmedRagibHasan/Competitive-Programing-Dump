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
        int a1, a2, b1, b2;

        cin >> a1 >> a2 >> b1 >> b2;

        int neta = a1 - a2;

        int netb = b1 - b2;

        int netex = neta + netb;

        if (netex < 0)
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