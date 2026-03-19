#include<bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin>>t;

      while(t--)
      {
         int n;

         cin>>n;

         int ans = 0;

         while(n != 50)
         {
            if(n<50)
            {
                n = n + 2;
                ans++;
            }
            else if(n>50)
            {
                n = n - 3;
                ans++;

            }
         }

         cout<<ans<<"\n";
      }
      return 0;
}