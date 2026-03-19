#include <bits/stdc++.h>
using namespace std;

//CC-*1108

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int> a(n);

        bool even_found = false;

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i] % 2 == 0)
            {
                even_found = true;

            }

        }

        if(even_found)
        {
            cout<<"NO"<<"\n";
        }
        else
        {
            cout<<"YES"<<"\n";
        }
        
    }
    return 0;
}