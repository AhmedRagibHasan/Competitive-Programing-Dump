#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        set<int> s;

        while (n--)
        {
            int x, y;

            cin >> x >> y;
            int dis = abs(a - x) + abs(b - y);
            s.insert(dis);
        }
        cout << *s.begin() << '\n';
    }
    return 0;
}