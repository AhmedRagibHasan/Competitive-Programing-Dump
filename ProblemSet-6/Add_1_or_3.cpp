#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while (t--)
    {
        long long int n, m;

        cin >> n >> m;


        long long int x = 0;

        if(m<n || m>3*n)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if((m-n) % 2 == 0 )
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
        
    }

    


    return 0;
}