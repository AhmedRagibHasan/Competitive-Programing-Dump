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
        int n;

        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int mn = a[0];

        int mx = a[n - 1];

        for (int i = 1; i < n; i++)
        {
            mn = mn + (2 * a[i]);
        }

        for (int i = n-2; i >= 0; i--)
        {
            mx = a[i] + (2 * mx);
        }


        cout<<mn<<" "<<mx<<"\n";
    }
    return 0;
}