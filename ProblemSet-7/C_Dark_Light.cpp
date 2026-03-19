#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin>>t;

    while (t--)
    {
        int n,k;

        cin>>n>>k;

        if(n == 4 && k == 0)
        {
            cout<<"Off"<<"\n";
        }
        else if(n== 4 && k==1)
        {
            cout<<"On"<<"\n";

        }
        else if(n == 0 && k ==1)
        {
            cout<<"On"<<"\n";
        }
        else if(n==0 && k == 0)
        {
            cout<<"Off"<<"\n";
        }
        else
        {
            cout<<"Ambiguous";
        }
    }
    
    return 0;
}