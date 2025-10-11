#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool full_white = true;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                full_white = false;
            }
        }

        if (full_white)
        {
            cout << 0 << '\n';
        }
        else
        {
            int first_1 = -1;
            int last_1 = -1;

            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    if (first_1 == -1)
                    {
                        first_1 = i;
                    }

                    last_1 = i;
                }
            }

            int op = 0;

            for (int i = first_1; i <= last_1; i++)
            {
                if (s[i] == '0')
                {
                    op++;
                }
            }

            cout << op << '\n';
        }
    }
    return 0;
}