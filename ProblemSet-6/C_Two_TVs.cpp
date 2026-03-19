#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n;

      cin>>n;

      map<int,int> mp;

      //Taking the range input and creating difference array with map
      // map cause indices could reach 10^9 which vector arrays can't contain

      for (int i = 0; i < n; i++)
      {
           int l,r;

           cin>>l>>r;

           mp[l]++;
           mp[r+1]--;
      }

      bool Greater_than_2 = false;

      long long sum = 0;


      for(auto &[key,value] : mp )
      {
        sum += value;

        if(sum > 2)
        {
            Greater_than_2 = true;
        }
         
         
      }

      if(Greater_than_2)
      {
         cout<<"NO"<<"\n";

      }
      else 
      {
        cout<<"YES"<<"\n";
      }
      
      return 0;
}