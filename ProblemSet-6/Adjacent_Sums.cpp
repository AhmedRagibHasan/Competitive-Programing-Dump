#include <bits/stdc++.h>
using namespace std;

#define ll long long

// CC-START207-Div-4 Problem E - Rating 1920

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

        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<ll> dp(n); // cost to to make good array untill i th index

        dp[0] = a[0];

        for (int i = 1; i < n; i++)
        {
            ll cost1 = a[i] + dp[i - 1];
            if (i - 1 >= 0)
            {
                ll cost2 = abs(a[i] - a[i - 1]);
                if (i - 2 >= 0)
                {
                    cost2 += a[i - 2];
                }
                if (i - 3 >= 0)
                {

                    cost2 += dp[i - 3];
                }
                dp[i] = min(cost1, cost2);
            }
        }

        cout << dp[n - 1] << "\n";
    }
    return 0;
}