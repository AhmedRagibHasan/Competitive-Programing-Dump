#include <bits/stdc++.h>
using namespace std;


//Week-4-Revision
//Two Pointer

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    vector<int> a(n);
    vector<int> b(m);


    for(auto &val : a)
    {
        cin>>val;
    }

    for(auto &val : b)
    {
        cin>>val;
    }


    int l = 0, r = 0, cnt = 0;
    
    vector<int> ans(m);

    while(r<m)
    {
        if(l<n && a[l] < b[r])
        {
            cnt++,l++;
        }
        else
        {
            
            ans[r] = cnt; 
            r++;
        }
    }

    for(int val : ans)
    {
        cout<<val<<" ";
    }



    return 0;
}