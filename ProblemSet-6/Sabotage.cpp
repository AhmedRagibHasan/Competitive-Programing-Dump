#include <bits/stdc++.h>
using namespace std;

// START-208-Div-4-C

// Sabotage-CC-984

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int r = 1;
        sort(v.rbegin(), v.rend());

        for (int i = 0; i < k; i++)
        {
            v[i] = 0;
            x += 100;
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i]>x)
            {
                r++;
            }
        }

        cout << r << "\n";
    }
    return 0;
}