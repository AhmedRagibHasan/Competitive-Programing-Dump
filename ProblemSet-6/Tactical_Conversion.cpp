#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;

        bool flag = true;

        if (n == 3)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '1')
                {
                    flag = false;
                    break;
                }
            }
        }
        else if (n == 2)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1' && s[i + 1] == '1')
                {
                    flag = false;
                    break;
                }
            }
        }

        if(flag)
        {
            cout<<"Yes"<<"\n";
        }
        else
        {
            cout<<"No"<<"\n";


        }
    }
    return 0;
}