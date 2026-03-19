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
        int x,y,z;
        cin>>x>>y>>z;


        int l1 = x - y;
        int r1 = x + y;   
        int l2 = x - z;
        int r2 = x + z;   

        int l = max(l1, l2);
        
        int r = min(r1, r2);

        if (l > r) {
            cout << 0 << "\n";
            continue;
        }

        int ans = r - l + 1;

        if (l <= x && x <= r)
            ans--;   

        cout << ans << "\n";



    }
    return 0;
}