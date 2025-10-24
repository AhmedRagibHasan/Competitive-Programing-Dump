#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    float qualy = 0;

    while(n--)
    {
        float q,y;
        cin>>q>>y;

        qualy += q * y; 


    }

    cout<<fixed<<setprecision(3)<<qualy<<'\n';
    return 0;
}