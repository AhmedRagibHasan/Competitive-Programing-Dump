#include <bits/stdc++.h>
using namespace std;

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_2_C

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;

    cin >> n >> q;

    vector<priority_queue<int>> pq(n);

    // priority_queue<int> pq;

    while (q--)
    {
        int t;
        cin >> t;
        if (t == 0)
        {
            long long int m, x;
            cin >> m >> x;
            pq[m].push(x);
        }
        else if (t == 1)
        {
            int m;
            cin >> m;
            if (!pq[m].empty())
            {
                int getmax = pq[m].top();
                cout << getmax << "\n";
            }
        }
        else if (t == 2)
        {
            int m;
            cin >> m;
             if (!pq[m].empty())
             {
                pq[m].pop();

             }
            
        }
    }
    return 0;
}