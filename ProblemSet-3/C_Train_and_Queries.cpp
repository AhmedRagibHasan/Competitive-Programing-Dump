#include<bits/stdc++.h>
using namespace std;


// #define yes cout << "YES" << '\n'
// #define no cout << "NO" <<'\n'

//codeforces

// https://codeforces.com/problemset/problem/1702/C

int main()
{
      int t;
      cin>>t;

      while(t--)
      {
         int n,m;
         cin>>n>>m;

         map<int,set<int>> mp;

         for (int i = 0; i < n; i++)
         {
            int x;
            cin>>x;
            mp[x].insert(i);
         }


        //  for(auto [x,y] : mp )
        //  {
        //     cout<<x<<"-> ";
        //     for(auto val : y )
        //     {
        //         cout<<val<<" ";
        //     }
        //     cout<<'\n';
        //  }


        for (int i = 0; i < m; i++)
        {
            int l,r;
            cin>>l>>r;
            if((mp.find(l) == mp.end()) || (mp.find(r) == mp.end()) )
            {
               cout<<"NO"<<'\n';
            }
            else
            {
               int startstationidx , endstationidx;

               startstationidx = *mp[l].begin();
               endstationidx = *mp[r].rbegin();

               if(startstationidx < endstationidx)
               {
                  cout<<"YES"<<'\n';
               }
               else
               {
                  cout<<"NO"<<'\n';
               }


            }
        }
        
         



      }
      return 0;
}