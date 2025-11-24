#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,q;

    cin>>n>>q;

    long long a[n+2];

    

    long long prefix_sum[n+2];

    prefix_sum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
        prefix_sum[i] = prefix_sum[i-1] + a[i];
        
    }


    while (q--)
    {
        int l,r;
        cin>>l>>r;

       cout<<prefix_sum[r] - prefix_sum[l-1]<<"\n";        
    }
    
    
    return 0;
}