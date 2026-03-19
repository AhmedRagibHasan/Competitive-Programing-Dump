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

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

        }
            

        bool flag0 = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                flag0 = false;

            }
                
        }

        if (flag0)
        {

            cout << -1 << "\n";
            continue;
        }

        if(a[0] + a[2] != a[1])
        {
             cout << "1 3 2\n";
        }
        else
        {
            cout << "1 2 3\n";

        }
            
    }

    return 0;
}