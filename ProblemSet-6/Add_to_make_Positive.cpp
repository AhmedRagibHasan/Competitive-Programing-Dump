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
        double n;
        cin >> n;

        vector<double> a(n);

        double sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            sum += a[i];
        }

        // cout<<"sum is "<<sum<<"\n";

        if (sum < 0)
        {
            sum = abs(sum);

            double x = ceil(sum / n);

            cout << x << "\n";
        }
        else
        {
            cout<< 0 <<"\n";
        }
    }
    return 0;
}