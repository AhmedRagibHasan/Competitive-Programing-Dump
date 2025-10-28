#include <bits/stdc++.h>
using namespace std;

// codeforces

// https://codeforces.com/problemset/problem/1793/C

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> vper;

        set<int> sper;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            vper.push_back(val);

            sper.insert(val);
        }

        int l = 0;
        int r = n - 1;

        int mn = *sper.begin();

        int mx = *sper.rbegin();

        bool flag = false;

        while (l < r)
        {
            if (vper[l] != mn && vper[l] != mx && vper[r] != mn && vper[r] != mx)
            {
                cout << l + 1 << " " << r + 1 << '\n';
                flag = true;
                break;
            }
            else
            {
                if (vper[l] == mn || vper[l] == mx)
                {
                    sper.erase(vper[l]);
                    l++;
                }
                else if (vper[r] == mn || vper[r] == mx)
                {
                    sper.erase(vper[r]);
                    r--;
                }

                if (!sper.empty())
                {
                    mn = *sper.begin();

                    mx = *sper.rbegin();
                }
            }
        }

        if (!flag)
        {
            cout << -1 << '\n';
        }
    }
    return 0;
}