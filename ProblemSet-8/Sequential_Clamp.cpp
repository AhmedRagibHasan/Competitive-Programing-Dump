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
        int n;

        cin >>n;

        int ans = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int a,b;

            cin>>a>>b;

            ans = min(max(ans,a),b);


        }

        cout<<ans<<"\n";
        

       

    }

    return 0;
}

