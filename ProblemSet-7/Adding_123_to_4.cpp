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
        int x,y,z;

        cin>>x>>y>>z;

        int cnt13 = min(x,z);

        int cnt2 = y/2;

        int ans = cnt13 + cnt2;

        cout<<ans<<"\n";
    }
    
    return 0;
}