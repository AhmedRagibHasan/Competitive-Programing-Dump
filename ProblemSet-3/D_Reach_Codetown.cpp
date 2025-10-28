#include <bits/stdc++.h>
using namespace std;

// 


bool is_vowel(char c)
{
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string s2 = "CODETOWN";

        bool flag = true;

        for (int i = 0; i < 8; i++)
        {
            bool check1 = is_vowel(s[i]);
            bool check2 = is_vowel(s2[i]);

            if(check1 != check2)
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
    return 0;
}