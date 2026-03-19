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

        cin >> s;

        int chef = 0, antichef = 0;

        int ways = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                chef++;
                if (chef > antichef)
                {
                    ways++;
                }
            }
            else if (s[i] == '0')
            {
                antichef++;
                if (chef > antichef)
                {
                    ways++;
                }
            }
        }


        cout<<ways<<"\n";
    }

    return 0;
}