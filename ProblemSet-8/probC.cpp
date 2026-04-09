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

         

        int small = 1;       
        int big = 3*n;       
        
        for(int i = 0; i < n; i++)
        {
            int a = big;        
            int b = big - 1;    
            int c = small;      
            big -= 2;
            small++;
            cout << a << " " << b << " " << c;
            if(i < n-1) cout << " ";
        }
         cout<<"\n";
         
      }
      return 0;
}