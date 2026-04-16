#include<bits/stdc++.h>
using namespace std;

int main()
{
      int a = 346;

      int b = 556;

      set<int> st;


      for (int i = 1; i < a; i++)
      {
        if(i % a == 31)
        {
            st.insert(i);
        }
      }


      for (int i = 1; i < a; i++)
      {
        if(i % a == 31)
        {
            st.insert(i);
        }
      }


      cout<<"set of real numbers that returns 31 after dividing 346 and 556 - "<<"\n";

      for(int val : st)
      {
        cout<<val<<" ";

      }

      cout<<"\n";


      

      return 0;
}