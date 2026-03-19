#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first != b.first)
    {
        return a.first > b.first; // returning the higher score making it position befor the lower numbers in the sort
    }
    return a.second < b.second; // when score is equal making the player with the lower number position first in the sort
}

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

        vector<pair<int, int>> players;

        for (int i = 1; i <= n; i++)
        {

            int score = __gcd(i, n);

            players.push_back({score, i});
        }

        sort(players.begin(), players.end(), cmp); // this is a custom sort where user dictates the rules of sorting instead of a default ascending sort

        for (auto ans : players)
        {
            cout << ans.second << " ";
        }
        cout << "\n";
    }
    return 0;
}