#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> freq;

    for (int i = 0; i < n - 1; i++)
    {
        string twoGram = "";
        twoGram += s[i];
        twoGram += s[i + 1];

        freq[twoGram]++;
    }

    string ans = "";
    int maxCount = 0;

    for (auto it = freq.begin(); it != freq.end(); it++)
    {
        if (it->second > maxCount)
        {
            maxCount = it->second;
            ans = it->first;
        }
    }

    cout << ans << "\n";

    return 0;
}
