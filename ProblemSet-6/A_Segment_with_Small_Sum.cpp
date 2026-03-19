#include <bits/stdc++.h>
using namespace std;

//Week-05

//CF-EDU

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,s;

    cin>>n>>s;

    vector<long long> a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    

    long long l =0,r=0,sum = 0,ans = 0;

    while (r<n)
    {
        sum += a[r];
        if(sum<=s)
        {
            ans = max(ans,r-l+1); // (r-l+1) is the lenth of the l to r indexes
        }
        else
        {
            sum -=a[l];
            l++;
        }
        r++;
    }
    cout<<ans<<"\n";
    
    return 0;
}