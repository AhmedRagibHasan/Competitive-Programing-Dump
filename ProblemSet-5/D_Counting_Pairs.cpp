// CF-Rating-1200

//

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

// // for set

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// // for multiset

// template <typename T>
// using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;

   while (t--)
   {
      long long int n, x, y;
      cin >> n >> x >> y;

      long long int sum = 0,ans = 0;;

      vector<long long int> v(n);

      pbds<pair<long long int, long long int>> st;

      long long int l = 0, r = 0;

      for (int i = 0; i < n; i++)
      {

         cin >> v[i];

         st.insert({v[i],i});

         sum += v[i];
      }



      for (int i = 0; i < n; i++)
      {
         l = (sum - v[i]) - y;
         r = (sum - v[i]) - x;

         st.erase({v[i],i});

         ans += st.order_of_key({r+1,i}) - st.order_of_key({l,i});


          

         
      }

      

      cout << ans << "\n";
   }

   return 0;
}