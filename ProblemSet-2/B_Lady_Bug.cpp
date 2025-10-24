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

        string a, b;
        cin >> a >> b;

        bool possible = true;

        vector<bool> can_swap(n, false);
        int ones = 0, zeros = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                ones++;
            }
            else
            {
                zeros++;
            }

            if (ones == zeros)
            {
                can_swap[i] = true;
            }
        }

        bool invert = false;

        for (int i = n - 1; i >= 0; i--)
        {
            char x = a[i];
            char y = b[i];

            if (invert == true)
            {
                if (x == '1')
                {
                    x = '0';
                }
                else
                {
                    x = '1';
                }

                if (y == '1')
                {
                    y = '0';
                }
                else
                {
                    y = '1';
                }
            }

            if (x != y)
            {
                if (can_swap[i] == true)
                {
                    invert = !invert;
                }
                else
                {
                    possible = false;
                    break;
                }
            }
        }

        if (possible == true)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
