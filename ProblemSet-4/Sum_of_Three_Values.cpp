#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> v;

    for (int i = 1; i <= n; i++)
    {
        int z;
        cin >> z;
        v.push_back({z, i});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        int target = x - v[i].first;
        int l = i + 1;
        int r = n - 1;

        while (l < r)
        {
            long long int sum = (long long int)v[l].first + v[r].first;

            if (sum == target)
            {
                cout << v[i].second << " " << v[l].second << " " << v[r].second << "\n";
                return 0;
            }
            else if (sum < target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}
