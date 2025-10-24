#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;

        cin >> s;


        int ones = 0;
        int zeros = 0;

        

        
        
            for (int i = 0; i < n; i++)
            {

                if (s[i] == '1')
                {
                    ones++;
                }
                else
                {
                    zeros++;
                }
            }
        

            int cnt = min(ones,zeros);

        if (cnt % 2 == 0)
        {

            cout << "Ramos" << '\n';
            
        }
        else
        {
            cout << "Zlatan" << '\n';
            
        }
    }
    return 0;
}