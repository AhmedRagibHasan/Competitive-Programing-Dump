#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;

    cin >> n >> m >> k;

    vector<long long int> a(n + 2), change(n + 2, 0), chnage_on_query(m + 2, 0);
    
    vector<pair<pair<long long int, long long int>, long long int>> query(m + 2);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= m; i++)
        cin >> query[i].first.first >> query[i].first.second >> query[i].second;

    while (k--)
    {
        int l, r;
        cin >> l >> r;
        chnage_on_query[l]++;
        chnage_on_query[r + 1]--;
    }

    long long int c = 0;
    for (int i = 1; i <= m; i++)
    {
        c += chnage_on_query[i];
        change[query[i].first.first] += query[i].second * c;
        change[query[i].first.second + 1] -= query[i].second * c;
    }

    c = 0;
    for (int i = 1; i <= n; i++)
    {
        c += change[i];
        a[i] += c;
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}