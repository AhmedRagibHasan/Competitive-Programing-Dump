#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n;

        cin>>n;

        vector<int> a(n+1);

        int total = 0;

        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];


            total += i*a[i];


        }

        cout<<total<<"\n";
        
    }
    return 0;
}