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

        vector<int> a(n + 1);
        multiset<int> ans;

        for (int i = 1; i <= n + 1; i++)
        {
            cin >> a[i];
        }

        int b = 0, c = 0;

        for (int i = 1; i <= n + 1; i++)
        {
            if (i % 2 == 0)
            {
                b = max(a[i - 1], a[i]);
                ans.insert(b);

                if (i + 1 <= n + 1)
                {
                    c = max(a[i], a[i + 1]);
                    ans.insert(c);
                }
            }
        }

                cout << *(ans.begin()) << "\n";
    }

    return 0;
}