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
        int x,y;

        cin>>x>>y;

        int bob = (y-x)/2;

        int alice = bob + x;

        cout<<alice<<" "<<bob<<"\n";

          
    }
    return 0;
}