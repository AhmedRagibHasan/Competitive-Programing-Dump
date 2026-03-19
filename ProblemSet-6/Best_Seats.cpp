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

        int ticket = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            // for (int j = 1; j < n; j++)

            ticket = min(ticket, a[i] + a[i + 1]);
        }

        cout << ticket << "\n";
    }
    return 0;
}