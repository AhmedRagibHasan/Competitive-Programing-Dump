#include<bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin>>t;

      while(t--)
      {
        int n;
        cin>>n;

        int fact = 1;

       

        for (int i = 1; i <= n; i++)
        {
            fact *= i;
            
        }

        if(fact<10)
        {
            cout<<fact<<'\n';

        }
        else if(fact>=10)
        {
            cout<<fact % 10<<'\n';
        }

        
        
      }
      return 0;
}