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
        int w,p,k;
        cin>>w>>p>>k;

        int style = 0;

        int left = 0;

        if(w <= k)
        {
            style = w * 2 ;

            left = k - w;

            style = style + left;
            

        }
        else
        {
            style = k * 2;
        }

        cout<<style<<"\n";

    }
    return 0;
}