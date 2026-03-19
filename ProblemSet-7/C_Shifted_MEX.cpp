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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long int ans_mex = 0;

        for (int i = 0; i < n; i++)
        {
            if (i > 0 && a[i] == a[i + 1])
            {
                continue;
            }

            long long int curr = a[i];

            for (int j = i; j < n; j++)
            {
                if (a[j] == curr)
                {
                    curr++;
                }
                else if (a[j] > curr)
                {
                    break;
                }
            }

            long long temp = curr - a[i];

            ans_mex = max(temp,ans_mex);
        }

        cout<<ans_mex<<"\n";
    }

    return 0;
}