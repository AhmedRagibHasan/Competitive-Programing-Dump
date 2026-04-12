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
        int n,m,a,b,c;

        cin>>n>>m>>a>>b>>c;

        int movie_food = n + m;

        int combo = 0;

        int extra = 0;

        if(n > m)
        {
            combo = c * m;

            extra = a * (n - m);

            cout<<combo+extra<<"\n";

            
        }
        else if(m > n)
        {
            combo = c * n;

            extra = b * (m - n);

            cout<<combo+extra<<"\n";

            
        }
        else
        {
            combo = c * n;

            cout<<combo<<"\n";
        }


    }
    return 0;
}