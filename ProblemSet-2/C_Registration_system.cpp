#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

     map<string,int> mp;

    while(n--)
    {
        string s;
        cin>>s;

       

        auto it = mp.find(s);
        if(it == mp.end())
        {
            cout<<"OK"<<'\n';
            mp[s] = 1;
        }
        else
        {
            cout<<s<<mp[s]<<'\n';
            mp[s] = mp[s]+1;
        }
        
    }


    


    return 0;
}