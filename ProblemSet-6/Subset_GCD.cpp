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
        int n,k;

        cin>>n>>k;

        int a = n/k;
        // cout<<a<<"\n";

        for (int i = 1; i <= k; i++)
        {
            
            cout<<i*a<<" ";
            
            
        }
        cout<<"\n";
        
    }
    
    return 0;
}