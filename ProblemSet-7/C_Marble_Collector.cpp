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
        int n,m;

        cin>>n>>m;

        set<int> st;

        int misstype = 0;

        for (int i = 0; i < n; i++)
        {
            int marble;

            cin>>marble;
            st.insert(marble);
        }

        cout<<m-st.size()<<"\n";
        
    }
    
    return 0;
}