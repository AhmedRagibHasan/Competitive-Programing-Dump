#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        long long base = 0;
        
        int cnt[200005];

        for (int i = 0; i <= n; i++)
        {
            cnt[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                base += i;
                int gain = (n - 1 - i) - i;
                if (gain > 0)
                {
                    cnt[gain]++;
                }
            }
            else
            {
                base += (n - 1 - i);
                int gain = i - (n - 1 - i);
                if (gain > 0)
                {
                    cnt[gain]++;
                }
            }
        }

        long long current = base;
        int gain_index = n;

        for (int k = 1; k <= n; k++)
        {
            while (gain_index > 0 && cnt[gain_index] == 0)
            {
                gain_index--;
            }

            if (gain_index > 0)
            {
                current += gain_index;
                cnt[gain_index]--;
            }

            cout << current;

            if (k != n)
            {
                cout << ' ';
            }
        }

        cout << '\n';
    }

    return 0;
}
