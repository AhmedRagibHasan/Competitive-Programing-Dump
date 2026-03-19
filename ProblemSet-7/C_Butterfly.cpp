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
        long long int r,g,b;

        cin>>r>>g>>b;

        long long int mx = 0;

        long long sum = r+g+b;

        mx = max(max(mx,r),max(g,b));

        long long diff = sum - mx;

        // cout<<mx<<"\n";


        if(diff>=mx)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";

        }

        // if(mx != r)
        // {
        //     sum += r;
        // }
        // if(mx != g)
        // {
        //     sum += g;
        // }
        // if(mx != b)
        // {
        //     sum += b;
        // }


        



    }
    
    return 0;
}