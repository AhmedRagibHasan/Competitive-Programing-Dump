#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1669/E

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        map<string, int> freq;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            string s = v[i];

            
            for (char ch = 'a'; ch <= 'k'; ch++) {
                if (ch == s[0]) 
                {
                    continue;
                    
                }

                string temp = s;

                temp[0] = ch;

                if (freq.count(temp))
                {
                    ans += freq[temp];

                } 
            }

            
            for (char ch = 'a'; ch <= 'k'; ch++) {
                if (ch == s[1]) 
                {
                    continue;
                
                }

                string temp = s;

                temp[1] = ch;

                if (freq.count(temp))
                {

                   ans += freq[temp];
                }
            }

            
            freq[s]++;
        }

        cout << ans << '\n';
    }

    return 0;
}
