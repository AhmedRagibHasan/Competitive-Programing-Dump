#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1468/C

int main()
{
    int q,customer_idx = 1;
    cin >> q;

    set<pair<int, int>> st;

    multiset<pair<int, int>> mst;

    vector<int> ans;

    for (size_t i = 1; i <= q; i++)
    {
        int opt;

        cin >> opt;

        if (opt == 1)
        {
            int budget;
            cin >> budget;

            st.insert({customer_idx, budget});
            mst.insert({budget, -customer_idx});

            customer_idx++;
        }
        else if (opt == 2)
        {

            int idx = st.begin()->first;
            int budget = st.begin()->second;

            ans.push_back(idx);

            st.erase(st.begin());

            mst.erase({budget,-idx});
        }
        else
        {
            int idx = -mst.rbegin()->second;
            int budget = mst.rbegin()->first;

            ans.push_back(idx);

            mst.erase(--mst.end());

            st.erase({idx, budget});
        }
    }


    for(auto val : ans)
    {
        cout<<val<<" ";
    }

    cout<<'\n';

    //   for(auto [x,y] : st )
    //   {
    //      cout<<x<<"->"<<y<<" | ";
    //   }
    //   cout<<"\n";

    //   for(auto [x,y] : mst )
    //   {
    //      cout<<x<<"->"<<y<<" | ";
    //   }

    return 0;
}