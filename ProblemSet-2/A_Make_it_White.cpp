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

        string s;

        cin>>s;

        int first_pos = -1;
        int last_pos = -1;

        first_pos = s.find('B');
        last_pos = s.rfind('B');

        int substring_size = last_pos - first_pos + 1;
        
        cout<<substring_size<<"\n";

      }
      return 0;
}