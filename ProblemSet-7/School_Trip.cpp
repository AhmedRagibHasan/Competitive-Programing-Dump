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
        int n,x,k;

        cin>>n>>x>>k;

        int extra = x % k;

        int dont_join = extra;

        int please_join = 200;

        int need = x + (k - extra);
        
        if(need <= n)
        {
            please_join = k - extra;
        }

        cout<<min(dont_join,please_join)<<"\n";


    }
    
    return 0;
}