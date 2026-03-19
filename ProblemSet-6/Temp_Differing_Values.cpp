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
        int n,k;

        cin>>n>>k;

        string s;

        cin>>s;

        // int cnt0 = 0, cnt1 = 0;

        bool flag = true;

        for (int i = 1; i <= n; i++)
        {
            if(s[i] == s[i+k] )
            {
                flag = false;

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