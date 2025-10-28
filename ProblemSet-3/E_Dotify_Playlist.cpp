#include <bits/stdc++.h>
using namespace std;

// 




int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n,k,l;
        cin>>n>>k>>l;

        map<int,int> mp;

        for (int i = 0; i < n; i++)
        {
            int m,la;
            cin>>m>>la;
            mp[m] = la;
            
        }

        for(auto [x,y] : mp )
        {
            cout<<"Song : "<<x<<" -> "<<"Lang : "<<y<<"\n";
        }
        
    }
    return 0;
}