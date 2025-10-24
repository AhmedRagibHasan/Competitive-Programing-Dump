#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, s2;
    cin >> s;

    s2.push_back(s[0]);

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '-')
        {
            s2.push_back(s[i + 1]);
        }
    }

    cout << s2 << "\n";

    return 0;
}