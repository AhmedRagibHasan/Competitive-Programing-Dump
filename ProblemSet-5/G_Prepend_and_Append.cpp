#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1791/C

//CF rating 800

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

        string s;
        cin >> s;

        int l = 0, r = n - 1;
        bool flag = true;

        while (l <= r)
        {
            if (s[l] == '1' && s[r] == '1' || s[l] == '0' && s[r] == '0')
            {
                flag = false;
                break;
            }
            else
            {
                l++;
                r--;
            }
        }

        // cout << "size of present L : " << l << "\n";

        int ans = 0;

        if (!flag)
        {
            ans = n - (l*2);
            // cout << "size of the given string was : " << n << "\n";
            cout << ans << "\n";
        }
        else
        {
            // cout << "size of the given string was : " << n << "\n";

            cout << 0 << "\n";
        }
    }
    return 0;
}