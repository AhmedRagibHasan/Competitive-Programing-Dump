#include<bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1791/C

int main()
{
      int t;
      cin>>t;

      while(t--)
      {
         int n;
         cin>>n;

         string s;
         cin>>s;

         int short_s = n;

         for (int i = 0,j = n-1 ; j > i; i++,j--)
         {
            if((s[i] == '1' && s[j] == '0') || (s[i] == '0' && s[j] == '1') )
            {
                short_s = short_s-2;


            }
            else
            {
                break;
            }
            
            
         }

         cout<<short_s<<"\n";
         
      }
      return 0;
}