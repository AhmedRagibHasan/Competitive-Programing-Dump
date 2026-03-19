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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        unordered_map<int, int> cnt;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            cnt[a[i]]++;

            if (cnt[a[i]] == 2)
            {
                ans += 2;
                cnt[a[i]] = 0;  // consume the pair
            }
        }

        cout << ans << "\n";
    }

    return 0;
}