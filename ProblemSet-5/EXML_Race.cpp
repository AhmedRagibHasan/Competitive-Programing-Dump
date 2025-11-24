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

        multiset<pair<int,int>> ms;

        for (int i = 1; i <= n; i++)
        {
            int d,t;
            cin>>d>>t;

            ms.insert({d/t,-i});
        }

        
        
        // for(auto p : ms)
        // {
        //     cout<<p.second<<" "<<p.first<<"\n";
        // }

        // cout<<"\n";

        auto it = ms.end();
        it--;
        cout<<-(it->second)<<"\n";


    }
    return 0;
}



