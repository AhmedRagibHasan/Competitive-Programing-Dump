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
        cin>>n;
        string s;
        cin >> s;

        bool flag = false;

        int c_01 = 0;
        int c_10 = 0;


        for (int i = 0; i < n-1; i++)
        {
            if(s[i] == '1' && s[i+1] == '0') 
            {
               c_10++;
                
            }
            if(s[i] == '0' && s[i+1] == '1')
            {
                c_01++;
            }

        }

        if(c_01 > 0 && c_10 >0)
        {
            cout<<"Alice"<<'\n';
        }
         else
        {
            cout<<"Bob"<<'\n';


        }

    
        
        
    }

    return 0;
}