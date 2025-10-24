#include<bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
        string s;
        cin>>s;

        int size = s.size();

        vector<pair<int,char>> upper;
        vector<pair<int,char>> lower;

        for (int i = 0; i < size; i++)
        {
            if(s[i] == 'B' )
            {
                if(!upper.empty()) upper.pop_back();

            }
            else if(s[i] == 'b')
            {
                if(!lower.empty() ) lower.pop_back();
            }
            else if( 'a' <= s[i] && s[i] <= 'z' )
            {
                lower.push_back({i,s[i]});
            }
            else if( 'A' <= s[i] && s[i] <= 'Z' )
            {
                upper.push_back({i,s[i]});
            }
        }

        //upper vector test

        // for(auto [x,y] : upper)
        // {
        //     cout<<x<<"->"<<y<<'\n';
        // }

        // for(auto [x,y] : lower)
        // {
        //     cout<<x<<"->"<<y<<'\n';
        // }


        vector<pair<int,char>> final;

        // string ans;

        for(auto [x,y] : upper)
        {
            final.push_back({x,y});
        }

        for(auto [x,y] : lower)
        {
            final.push_back({x,y});
        }



        sort(final.begin(),final.end());

        for(auto [x,y] : final)
        {
            cout<<y;
        }



        

        cout<<'\n';
        

        

        



        
      
        
      }
      return 0;
}