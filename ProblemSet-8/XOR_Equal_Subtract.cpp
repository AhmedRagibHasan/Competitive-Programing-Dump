#include<bits/stdc++.h>
using namespace std;

//  https://www.codechef.com/problems/XORSUB7?tab=submissions

// Start 216 Div-4 Problem-D

int main()
{
      int t;

      cin>>t;

      while(t--)
      {
        int n;

        cin>>n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        sort(a.begin(),a.end());



        vector<int> dp(n,1);

        // dp[i] = mane i length porjonto max length of good subsequence

        int mx = 1;

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if((a[i]^a[j]) ==abs(a[i] - a[j]) )
                {
                    dp[i] = max(dp[i],dp[j]+1 );
                }
            }

            mx = max(mx, dp[i]);

            
            
        }



        cout<<mx<<"\n";


        


        
        
      }
      return 0;
}