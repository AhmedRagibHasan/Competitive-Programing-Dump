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
        int n,s;

        cin>>n>>s;


        int total6 = 6 * n;

        int total5 = 5 * n;

        if(s <= total5)
        {
            cout<<total6<<"\n";
        }
        else
        {

            int ans = (11 * n)-s;

            cout<<ans<<"\n";

        }


        
        
    }
    
    return 0;
}