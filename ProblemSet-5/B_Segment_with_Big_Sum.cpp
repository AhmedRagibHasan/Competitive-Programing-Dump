#include <bits/stdc++.h>
using namespace std;

int main()
{

   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   long long int n, s;

   cin >> n >> s;

   vector<long long int> v(n);

   for (int i = 0; i < n; i++)
   {
      cin >> v[i];
   }

   long long int l = 0, r = 0, sum = 0, ans = n + 100;

   while (r < n)
   {
      sum += v[r];
      if (sum >= s)
      {
         ans = min(ans, r - l + 1);
         while (sum >= s && l < r)
         {
            sum -= v[l];
            l++;
            if (sum >= s)
            {

               ans = min(ans, r - l + 1);
            }
         }
      }

      r++;
   }

   if (ans == n + 100)
   {
      cout << -1 << "\n";
   }
   else
   {
      cout << ans << "\n";
   }
   return 0;
}