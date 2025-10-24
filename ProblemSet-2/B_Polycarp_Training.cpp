#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    multiset<int> mset;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;

        mset.insert(val);
    }

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        auto it = mset.lower_bound(i);
        

        if(it != mset.end())
        {
            ans++;
            mset.erase(it);
            
        }

        

        
    }

    cout<<ans<<'\n';
    
    



    return 0;
}