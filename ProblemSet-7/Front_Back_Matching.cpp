#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        string s;

        cin>>s;

        bool twice = false;

        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(s[i] == s[j] )
                {
                    twice = true;
                    break;
                }
            }
            
        }

        if(twice)
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