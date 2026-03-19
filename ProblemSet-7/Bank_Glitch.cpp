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
        int a, b, x, y;

        cin >> a >> b >> x >> y;

        long long int exchange = a / x;

        long long int ans = a + b + (exchange * (y - x));

        cout<<ans<<"\n";
    }

    return 0;
}