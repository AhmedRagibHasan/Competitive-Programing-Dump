#include<bits/stdc++.h>
using namespace std;


//input 

// 6 6
// 4 5 3 2 1 7

int main()
{
      int n,s;



      cin>>n>>s;

      vector<int> v(n);

      for(auto &val : v)
      {
        cin>>val;
      }

      int l = 0, r = 0, sum = 0;

      while (r<n)
      {
         sum += v[r];
         if(sum == s)
         {
            cout<<"Hell Yeah"<<"\n";
            cout<<"subarray size is : "<<(r-l+1)<<"\n";
            cout<<"sum found from index "<<l<<" to index "<<r<<"\n";
         }
         else if(sum > s)
         {
            sum -= v[l];
            l++;
         }
         r++;
      }
      


      return 0;
}