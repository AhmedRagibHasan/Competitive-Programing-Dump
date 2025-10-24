#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    map<char, int> mp;
    for (char c : s)
        mp[c]++;

    int odd = 0;
    char oddChar = 0;
    for (auto [x, y] : mp)
    {
        if (y % 2 != 0)
        {
            odd++;
            oddChar = x;
        }
    }

    if (odd > 1)
    {
        cout << "NO SOLUTION" << '\n';
    }
    else
    {
        string first_half = "";
        for (auto [x, y] : mp)
        {
            first_half += string(y / 2, x);
        }

        string res = first_half;
        if (oddChar)
        {
            res += string(mp[oddChar] % 2, oddChar);

        }
        reverse(first_half.begin(), first_half.end());
        res += first_half;

        cout << res << '\n';
    }

    return 0;
}