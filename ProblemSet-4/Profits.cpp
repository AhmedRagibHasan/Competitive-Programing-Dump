#include <bits/stdc++.h>
using namespace std;

// https://www.codechef.com/START210D/problems/PROFIT

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while (t--)
    {

        int n, x;
        cin >> n >> x;

        int served = 0;

        int sell = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i >= x)
            {
                served++;

                sell = sell + i;
            }
        }

        int cost = served * x;

        int profit = sell - cost;

        cout << profit << '\n';
    }

    return 0;
}