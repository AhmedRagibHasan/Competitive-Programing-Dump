#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>&a , pair<int,int>&b)
{
    if(a.first != b.first)
    {
        return a.first > b.first;
    }
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int,int>> players;
        for (int i = 0; i < n; i++)
        {
            int score = __gcd(i,n);
            players.push_back({score,i});

        }

        sort(players.begin(),players.end(), cmp);


        for(auto val : players)
        {
            
            
            cout<<val.first<<" ";
        }


        

    }

    return 0;
}