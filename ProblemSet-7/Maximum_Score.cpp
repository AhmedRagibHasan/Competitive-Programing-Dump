#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        vector<int> a(n);

        vector<int> b(n);

        int allcoin = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            allcoin += a[i];

        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];

        }

        int mindiff = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            mindiff = min(mindiff, a[i] - b[i]);

        }


        int wincoins = allcoin - mindiff;
        

        cout << wincoins << "\n";
    }

    return 0;
}