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

        vector<int> points(n);

        for (int i = 0; i < n; i++)
        {
            cin>>points[i];
        }

        bool good = true;

        for (int i = 0; i < n; i++)
        {
            if(points[i] <= 4 )
            {
                good = false;

            }

            
        }
        

        if (good)
        {

            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}