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
        int b[n];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }

        int hap_day = 0;

        for (int i = 0; i < n; i++)
        {
            if(max(a[i],b[i]) <= min(a[i],b[i]) * 2  )
            {
                hap_day++;

            }
        }

        cout<<hap_day<<'\n';
        

    }
    return 0;
}