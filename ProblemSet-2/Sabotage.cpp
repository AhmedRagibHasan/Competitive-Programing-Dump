#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n,x,k;
        cin>>n>>x>>k;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        // for(int i : a)
        // {
        //     cout<<i<<" ";
        // }

        int r = 1;


        sort(a.rbegin(),a.rend());

        for (int i = 0; i < k; i++)
        {
            if(a[i] > x)
            {
                a[i] = 0;
                x += 100;
            }
        }
        

        for (int i = 0; i < n; i++)
        {
            if(a[i] > x )
            {
                
                r++;

            }
            
        }

        cout<<r<<'\n';
        
        
    }
        return 0;
}