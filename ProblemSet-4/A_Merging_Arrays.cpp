#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    vector<int> a(n);

    vector<int> b(m);

    multiset<int> mul;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        mul.insert(a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
        mul.insert(b[i]);
    }

    // for(int v : a)
    // {
    //     cout<<v<<" ";
    // }

    // cout<<"\n";

    // for(int v : b)
    // {
    //     cout<<v<<" ";
    // }

    

    // int len = max(n,m);

    
    

    for(auto val : mul)
    {
        cout<<val<<" ";
    }




    
    return 0;
}