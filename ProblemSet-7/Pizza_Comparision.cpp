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
        float a,b;
        cin>>a>>b;

        if(a/100 < b/225 )
        {
            cout<<"Small"<<"\n";
        }
        else if(a/100 > b/225)
        {
            cout<<"Large"<<"\n";


        }
        else
        {
            cout<<"Equal"<<"\n";


        }


    }
    return 0;
}