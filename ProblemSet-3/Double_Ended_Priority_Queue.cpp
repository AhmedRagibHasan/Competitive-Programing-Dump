#include <bits/stdc++.h>
using namespace std;

// https://judge.yosupo.jp/submission/324074


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    multiset<int> mset;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mset.insert(val);
    }

    while (q--)
    {
        int opt;
        cin >> opt;

        if (opt == 0)
        {
            int x;
            cin >> x;

            mset.insert(x);
        }
        else if (opt == 1)
        {
            auto it = mset.begin();
            cout << *it << "\n";
            mset.erase(it);
        }
        else if (opt == 2)
        {
            auto it = prev(mset.end());
            cout << *it << "\n";
            mset.erase(it);
        }
    }

    return 0;
}