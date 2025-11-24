#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long ans = LLONG_MAX;
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            long long cnt = 0;
            bool flag = true;
            int l = 0, r = n - 1;

            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else if (s[r] == ch)
                {
                    cnt++;
                    r--;
                }
                else if (s[l] == ch)
                {
                    cnt++;
                    l++;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans = min(ans, cnt);
        }
        if (ans == LLONG_MAX)
            cout << -1 <<"\n";

        else
            cout << ans <<'\n';
    }
    return 0;
}