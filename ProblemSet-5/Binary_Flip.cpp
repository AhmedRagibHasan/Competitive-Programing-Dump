#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;

        cin>>s;

        int cnt00 = 0;
        int cnt11 = 0;


        for (int i = 0; i < n-1; i++)
        {
             if(s[i] == '0' && s[i+1] == '0' )
             {
                cnt00++;

             }
             else if(s[i] == '1' && s[i+1] == '1' )
             {
                cnt11++;
             }
        }

        if(cnt11 >=  cnt00 )
        {
            cout<<0<<"\n";
        }
        else
        {
            cout<<1<<"\n";
        }
        
    }
    return 0;
}