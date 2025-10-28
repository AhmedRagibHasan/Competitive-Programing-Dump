
#include <bits/stdc++.h>
using namespace std;


// https://codeforces.com/problemset/problem/2000/C

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;

            if (s.size() != n)
            {
                cout << "NO" << '\n';
                continue;
            }

            map<int, char> num_to_char;
            map<char, int> char_to_num;

            for (int i = 0; i < n; i++)
            {
                num_to_char[v[i]] = s[i];
                char_to_num[s[i]] = v[i];
            }

            // for (auto [x, y] : char_to_num) {
            //    cout << x << " " << y << '\n';
            // }

            bool flag = true;

            for (int i = 0; i < n; i++)
            {
                int num = v[i];
                char c = s[i];

                if (num_to_char[num] != c)
                {
                    flag = false;
                    break;
                }

                if (char_to_num[c] != num)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
    }

    return 0;
}
