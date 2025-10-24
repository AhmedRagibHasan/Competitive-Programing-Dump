#include<bits/stdc++.h>
using namespace std;

int main()
{
      int a,b,c;

      cin>>a>>b>>c;

      int cheap_cost = min(a,min(b,c));

      cout<<cheap_cost<<'\n';
      return 0;
}