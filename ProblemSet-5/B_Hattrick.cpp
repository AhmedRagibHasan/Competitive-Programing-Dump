#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        vector<string> v(6);

        for (int i = 0; i < 6; i++)
        {
            cin>>v[i];
        }

        bool flag = false;
        
       for (int i = 0; i <= 3; i++)
       {
           if(v[i] == "W" && v[i+1] == "W" && v[i+2] == "W" )
           {
              flag = true;
           }
       }

       if(flag)
       {
        cout<<"YES"<<"\n";
       }
       else
       {
        cout<<"NO"<<"\n";


       }
       

       


    }

    
    return 0;
}