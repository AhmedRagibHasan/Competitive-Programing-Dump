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

        vector<long long int> a(n);
        vector<long long int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        long long int bad_val = 0;

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                flag = false;
                break;
            }
            if (a[i] < b[i] && bad_val >= a[i])
            {
                flag = false;
                break;
            }

            bad_val = max(bad_val, a[i]);
        }

        if (flag)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }

    return 0;
}