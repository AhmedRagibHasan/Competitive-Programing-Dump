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
        int r,b,g;

        cin>>r>>b>>g;

        int coins = 0,bundles = 0;

        int rgb = 0,rb = 0,bg = 0,nr = 0,nb = 0, ng = 0 ;

        rb = min(r,b);
        bg = min(b,g);

        rgb = min(rb,bg);

        if(rgb != 0)
        {
            bundles = rgb * 10;

            if(rgb <= r)
            {
                nr = r - rgb;
            }
            if(rgb <= b)
            {
                nb = b - rgb;
            }
            if(rgb <= g)
            {
                ng = g - rgb;
            }

            coins = nr * 3 + nb * 3 + ng * 3 + bundles;




        }
        else
        {
            coins = r * 3 + b * 3 + g * 3;
            
        }

        cout<<coins<<"\n";

        



    }
    return 0;
}