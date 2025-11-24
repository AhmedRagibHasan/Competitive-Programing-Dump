#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

// for set

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// for multiset

// template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin>>n;

    pbds<int> p;

    for (int i = 1; i <= n; i++)
    {
        int val;
        cin>>val;

        p.insert(val);
    }

   

    int x = p.order_of_key(4); //strictly less values then 4

    cout<<x<<"\n";


    for(auto x : p)
    {
        cout<<x<<" ";
    }
    

    return 0;
}