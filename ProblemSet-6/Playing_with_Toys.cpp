#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;

    cin >> n >> m;

    if (m > n)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << n - m << "\n";
    }

    return 0;
}