#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum;
    cin >> n >> sum;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x = sum - v[i];
        auto it = mp.find(x);
        if(it != mp.end())
        {
            cout << it->second+1 << " " << i+1;
            return 0;
        }
        if (mp.find(v[i]) == mp.end())
            mp[v[i]] = i;
    }
    cout << "IMPOSSIBLE";
    return 0;
}