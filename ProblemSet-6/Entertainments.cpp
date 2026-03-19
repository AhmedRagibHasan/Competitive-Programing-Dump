#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    if(n*200 >= 1000)
    {
        cout<<1000<<"\n";
    }
    else
    {
        cout<<n*200<<"\n";
    }
    return 0;
}