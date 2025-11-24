#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;

    cin>>n>>q;

    vector<int> a(n+1);

    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }


    for (int i = 1; i <= q; i++)
    {
        int l,r,x;
        cin>>l>>r>>x;

        for (int j = l; j <= r; j++)
        {
            a[j] += x;
        }
        
    }


    for (int i = 1; i <= n; i++)
    {
        cout<<a[i]<<" ";
    }


    

    return 0;
}