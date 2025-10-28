#include<bits/stdc++.h>
using namespace std;


//https://www.hackerrank.com/challenges/cpp-sets/problem

int main()
{
      int q;
      cin>>q;

      set<int> st;

      while(q--)
      {
         int op,val;
         cin>>op>>val;

         

         if(op == 1)
         {
            st.insert(val);

         }
         else if(op == 2)
         {
            if(!st.empty())
            {
                st.erase(val);
            }


         }
         else if(op == 3)
         {

            auto it = st.find(val);
            if(it == st.end())
            {
                cout<<"No"<<'\n';
            }
            else
            {
                cout<<"Yes"<<"\n";
            }

         }


      }
      return 0;
}