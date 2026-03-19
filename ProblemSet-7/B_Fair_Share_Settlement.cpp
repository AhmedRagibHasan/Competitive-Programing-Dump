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
        int n ,k;

        cin>>n>>k;

        int perbill = n/(k+1);

        int ans = n - k*perbill;

        cout<<ans<<"\n";
    }
    
    return 0;
}