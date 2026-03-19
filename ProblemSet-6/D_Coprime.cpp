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

        cin >> n;

        // this block of code does the magic of storing the last index of the array elements ,here the values are used as indices and their indices are stored in their value location

        //************************************ */

        vector<int> idx(1001, -1);

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;

            idx[x] = i;
        }

        //*********************************** */

        int mx = 0;

        for (int x = 1; x <= 1000; x++)
        {
            if(idx[x] == -1)
            {
                continue;
            }

            for (int y = 1; y <= 1000; y++)
            {

                if (idx[y] == -1)
                {
                    continue;
                }

                if(__gcd(x,y) == 1)
                {

                    // cout<<"current max = "<<mx<<"\n";

                    mx = max(mx, idx[x] + idx[y]);

                    // cout<<"show me i & j "<<i+1<<" "<<j+1<<" i+j= "<<i+j+2<<" GCD- "<<__gcd(a[i],a[j])<<"\n";
                }
            }
        }

        if (mx == 0)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << mx << "\n";
        }
    }
    return 0;
}