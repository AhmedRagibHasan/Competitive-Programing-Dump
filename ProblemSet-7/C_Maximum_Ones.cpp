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
        int n, k;
        cin >> n >> k;

        string s;

        cin >> s;

        int size = s.size();

        int cnt_1 = 0;

        for (int i = 0; i+1 < n; i++)
        {

            if (s[i] == '1')
            {
                cnt_1++;
            }
        }

        // cout<<size<<"\n";

        while (k != 0)
        {

            for (int i = 0; i < size; i++)
            {
                if(s[i] == '0' && s[i+1] == '1')
                {
                    cnt_1++;
                }
            }
            k--;
        }

        cout<<cnt_1<<"\n";
    }

    return 0;
}