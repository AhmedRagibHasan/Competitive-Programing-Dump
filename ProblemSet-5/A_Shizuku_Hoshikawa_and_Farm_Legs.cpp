#include <bits/stdc++.h>
using namespace std;

//CodeForces div-3-A

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        

        if(n % 2 == 1)
        {
            cout<<0<<"\n";
        }
        else
        {
            int a = n/2;

            cout<<(a/2)+1<<"\n";
        }
       
        

        
    }

    return 0;
}