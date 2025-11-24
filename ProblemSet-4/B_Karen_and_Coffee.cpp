#include <bits/stdc++.h>
using namespace std;

const int MAX = 200000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> diff(MAX + 2, 0);

    
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        diff[l] += 1;
        diff[r + 1] -= 1;
    }

    
    for (int i = 1; i <= MAX; i++) {
        diff[i] += diff[i - 1];
    }

    
    vector<int> pref(MAX + 1, 0);

    for (int i = 1; i <= MAX; i++) {
        int add = 0; 

        
        if (diff[i] >= k) {
            add = 1; 
        }

        
        pref[i] = pref[i - 1] + add;
    }

    
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;

        int result = pref[b] - pref[a - 1];
        cout << result << "\n";
    }

    return 0;
}
