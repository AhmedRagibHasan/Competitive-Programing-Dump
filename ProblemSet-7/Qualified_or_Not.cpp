#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x,y;

    cin>>n>>x>>y;

    bool flag  = false;

    if(n >= 2*x && n>=2*y )
    {
        cout<<"yes"<<"\n";
    }
    else
    {
        
        cout<<"no"<<"\n";


    }
    return 0;
}