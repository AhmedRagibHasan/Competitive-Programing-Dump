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
        long long int n;
        cin >> n;

        long long int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool swapped = true;

        while (swapped)
        {

            swapped = false;
            for (int i = 0; i < n; i++)
            {

                for (int j = i + 1; j < n; j++)
                {
                    if (a[i] > a[j] && a[i] % 2 != a[j] % 2)
                    {
                        swap(a[i], a[j]);
                        swapped = true;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}