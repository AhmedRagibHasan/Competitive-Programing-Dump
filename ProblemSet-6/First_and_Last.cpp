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
        long long n;

        cin >> n;

        vector<long long> a(n);

        long long int mx = 0;

        for (long long int i = 0; i < n; i++)
        {

            cin >> a[i];

            mx = a[0] + a[n - 1];
        }

        long long int l = 0, r = 0;

        long long sum = 0;

        for (long long i = 0; i < n - 1; i++)
        {

            long long temp = a[i] + a[i + 1];

            if (temp > sum)
            {
                sum = temp;
            }
        }

        cout << max(mx, sum) << "\n";
    }

    return 0;
}