#include <bits/stdc++.h>
using namespace std;

// https://cses.fi/problemset/task/1073

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    multiset<long long> tower_top;

    for (int i = 0; i < n; ++i)
    {
        long long cube;
        cin >> cube;

        auto it = tower_top.upper_bound(cube);

        if (it == tower_top.end())
        {

            tower_top.insert(cube);
        }
        else
        {

            tower_top.erase(it);
            tower_top.insert(cube);
        }
    }

    cout << tower_top.size() << "\n";
    return 0;
}