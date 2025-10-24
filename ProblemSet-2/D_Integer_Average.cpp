#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        int even =0 , odd = 0;

        for (int i = 0; i < n; i++)
        {
            if(a[i] % 2 == 0 )
            {
                even++;
            }
            else
            {
                odd++;
            }
            
            
        }

        if(even >= 2 || odd >= 2)
        {
            cout<<"YES"<<'\n';
            
        }
        else
        {
            cout<<"NO"<<'\n';
        }
        
        
        

    }
    return 0;
}