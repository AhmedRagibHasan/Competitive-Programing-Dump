#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;

    vector<long long int> divs;

    for (long long int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divs.push_back(i);
            if ((n / i) != i)
            {
                divs.push_back(n / i);
            }
        }
    }

    sort(divs.begin(), divs.end());

    if (divs.size() < k)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << divs[k - 1] << '\n';
    }

    return 0;
}