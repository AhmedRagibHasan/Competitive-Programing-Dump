#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      cin>>n;

      map <pair<string,string>,bool> mp;

      for (int i = 0; i < n; i++)
      {
           string s1,s2;
           cin>>s1>>s2;
           mp[{s1,s2}] = true;
           
           

      }


      // for(auto val : mp)
      // {
      //   pair<string,string> p = val.first;

      //   bool ok = val.second;

      //   cout<<p.first<<" "<<p.second<<" "<<ok<<"\n";


        
      // }


      cout<<mp.size()<<"\n";

      
      

      


      return 0;
}