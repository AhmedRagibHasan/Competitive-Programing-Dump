#include <bits/stdc++.h>
using namespace std;

// START-208-Div-4-D

// GCND-CC-1477

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t;
    cin>>t;


    while(t--)
    {

        int n;
        cin>>n;

        vector<int> a(n);

        set<int> st;

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            st.insert(a[i]);
        }

        if(st.size() == 1)
        {
            cout<<*(st.begin()) - 1<<"\n";
        }
        else if(st.size() > 2)
        {
            cout<<*(st.rbegin()) -1<<"\n";
        }
        else
        {
            int mx = *(st.rbegin());
            int mn = *(st.begin());

            for (int i = mx-1; i >=0; i--)
            {
                if(i != mn)
                {
                    cout<<i<<"\n";
                    break;
                }
                
            }
            

        }
        
    }

    return 0;


}