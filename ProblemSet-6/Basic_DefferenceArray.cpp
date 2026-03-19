#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin>>n;

      vector<int> v(n);

      for (int i = 0; i < n; i++)
      {
         cin>>v[i];
      }

      vector<int> dif(n);

      dif[0] = v[0];

      for (int i = 1; i < n; i++)
      {
        dif[i] = v[i] - v[i-1];

         
          
      }


      for(auto val : dif)
      {
         cout<<val<<" ";
      }

      cout<<"\n";

      vector<int> original_v(n);

      original_v[0] = dif[0];

      for (int i = 1; i < n; i++)
      {
         original_v[i] = original_v[i-1] + dif[i];
      }

      cout<<"Returning the original array calculated from the difference array"<<"\n";

      for(int val : original_v)
      {
         cout<<val<<" ";
      }
      
      
      
      return 0;
}