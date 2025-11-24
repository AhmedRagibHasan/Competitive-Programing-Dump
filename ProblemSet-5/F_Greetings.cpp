// CF-Rating-1500

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

// // for set

// template <typename T>
// using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// for multiset

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   int t;
   cin >> t;

   while (t--)
   {
      int n;
      cin >> n;

      vector<pair<long long int, long long int>> pos(n);

      pbds<long long int> st;

      for (int i = 0; i < n; i++)
      {

         cin >> pos[i].second >> pos[i].first;
      }

      sort(pos.begin(), pos.end());

      long long int ans = 0;

      for (auto &[a, b] : pos)
      {
         long long endpos = st.order_of_key(b);
         long long size = st.size();

         ans += size - endpos;

         st.insert(b);
      }

      cout << ans << "\n";
   }

   return 0;
}