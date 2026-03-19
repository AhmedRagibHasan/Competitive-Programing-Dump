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
        int n;

        cin >> n;

        string s;

        cin >> s;

        vector<int> freq(26, 0);

        bool cnt3 = false;

        for (int i = 0; i < n; i++)
        {
            char c = s[i];

            freq[c - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (freq[i] >= 3)
            {
                cnt3 = true;
                break;
            }
        }

        if (cnt3)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
        }
    }
    return 0;
}