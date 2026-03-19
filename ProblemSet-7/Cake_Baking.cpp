#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;

    cin>>n>>m;

    int happy = 0;

    int cakes = 0;

    if(n*2 <= m)
    {
        cout<<n<<"\n";
    }
    else
    {
        cout<<m-n<<"\n";

    }


    return 0;
}