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
        int n, k;

        cin >> n >> k;

        multiset<int> mst;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            mst.insert(val);
        }

        for (int i = 0; i < k; i++)
        {
            // int mn = *mst.begin();
            // int mx = *mst.rbegin();

            // int ins = mn + mx;

            auto it_2 = mst.begin();
            

            int mn = *it_2; 

            mst.erase(it_2);

            auto it = mst.end();
            it--;

            int mx = *it;
            mst.erase(it);

            int ins = mn + mx;


            

            mst.insert(ins);
            
        }

        for (auto i : mst)
        {
            cout << i << " ";
        }

        cout << "\n";
    }

    return 0;
}