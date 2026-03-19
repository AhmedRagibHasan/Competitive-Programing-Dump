#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int one = 0;
        int zero = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else
                one++;
        }

        // if(n %2 == 0 && one == zero)
        // {
        //     cout << "Yes" << endl;
        //     continue;
        // }
        // if(n % 2 == 0 && one != zero)
        // {
        //     cout << "No" << endl;
        //     continue;
        // }

        if (n % 2 == 0)
        {
            if (zero == n / 2 && one == n / 2)
            {
                cout << "Yes" << "\n";
            }
            else
            {
                cout << "No" << "\n";
            }
        }
        else if (n % 2 != 0)
        {
            if ((zero == (n / 2 + 1) && one == n / 2) || (zero == n / 2 && one == (n / 2 + 1)))
            {
                cout << "Yes" << "\n";
            }
            else
            {
                cout << "No" << "\n";
            }
        }
    }
}
