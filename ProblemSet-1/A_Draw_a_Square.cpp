#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        int l,r,d,u;

        cin>>l>>r>>d>>u;

        if(l == r && l == d && l == u && r == d && r == u && d == r  )
        {
            cout<<"Yes"<<"\n";
        }
        else
        {
            cout<<"No"<<"\n";

        }
    }
    

    return 0;
}