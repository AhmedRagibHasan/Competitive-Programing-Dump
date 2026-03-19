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
        long long int n, m, h, b, c;

        cin >> n >> m >> h;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<long long> reset(n);

        reset = a;

        for (int i = 0; i < m; i++)
        {
            cin >> b >> c;

            b = b - 1;

            a[b] = a[b] + c;

            if (a[b] > h)
            {
                a = reset;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}