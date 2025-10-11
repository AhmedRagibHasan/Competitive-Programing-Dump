#include<bits/stdc++.h>
using namespace std;

int main()
{
      int x,y,k;
      cin>>x>>y>>k;

      int ans = abs(x - y);

      if(ans <= k)
      {
        cout<<"Yes"<<"\n";
      }
      else
      {
        cout<<"No"<<"\n";


      }

      return 0;
}

// Done