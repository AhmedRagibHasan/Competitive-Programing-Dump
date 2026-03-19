#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;

    cin>>x;

    if(x<200)
    {
        cout<<x<<"\n";
    }
    else
    {
        cout<<x-50<<"\n";
    }
    return 0;
}