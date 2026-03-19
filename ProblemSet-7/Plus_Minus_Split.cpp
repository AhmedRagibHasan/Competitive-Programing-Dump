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

        vector<long long int> a(n);

        long long int sum = 0;

        

        

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            sum += a[i];

            
        }


        int idx1 = abs(a[0]) % 2;

        bool flag = true;


        
        for (int i = 1; i < n; i++)
        {
            

            if(abs(a[i]) % 2 != idx1 )
            {
                flag = false;
            }

            
        }

        

        if (flag)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }

    return 0;
}