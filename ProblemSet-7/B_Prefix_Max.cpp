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

        sort(a.begin(), a.end());

        int mx = a[n - 1];

        // cout<<mx<<"\n";

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum +=mx;
        }

        cout<<sum<<"\n";
    }

    return 0;
}