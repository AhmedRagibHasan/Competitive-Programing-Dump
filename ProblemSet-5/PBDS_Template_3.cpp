#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;



template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

// for multiset


int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin>>n;

    pbds<int> p;

    for (int i = 1; i < n; i++)
    {
        int val;
        cin>>val;

        p.insert(val);
    }

   

    auto it = p.find_by_order(1);

    cout<<*it<<"\n";


    for(auto x : p)
    {
        cout<<x<<" ";
    }
    

    return 0;
}