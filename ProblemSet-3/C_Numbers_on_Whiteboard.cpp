#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1430/C
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; 
    cin >> t;
    while (t--) {
        long long n; 
        cin >> n;
 
        cout << 2 << "\n";               
 
        long long last = n;
        for (long long i = n - 1; i >= 1; --i) {
            cout << last << " " << i << "\n";  
            last = (last + i + 1) / 2;         
        }
    }
    return 0;
}