#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r,b;

    cin>>r>>b;

    int g = 0;

    int skill = 0;


    if(r>b)
    {
        int leftr = r - b;

        r = b;

        g = b;

        skill = (g * 5) + leftr*1; 

        cout<<skill<<"\n";

        

    }
    else if(b>r)
    {
        int leftb = b-r;

        b = r;

        g = r;

        skill = (g*5) + leftb*2;

        cout<<skill<<"\n";

    }
    else
    {
        g = r;

        skill = g*5;

        cout<<skill<<"\n";

    }
    return 0;
}