#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int dp[n];

    set<int> st;


    for (int i = n-1 ; i >=0 ; i--)
    {
        st.insert(a[i]);

        dp[i] = st.size();


        
    }
    
    

    // vector<int> v;

    while(m--)
    {
        int q;
        cin>>q;


        
        cout<<dp[q-1]<<'\n';
        
    }
    return 0;
}