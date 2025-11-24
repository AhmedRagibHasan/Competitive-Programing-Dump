#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> days;
        int total = 0;
        for(int i = 0; i < n; i++){
            int val;
            cin >> val;
            if(val <= q){
                total++;
            }else{
                if(total > 0){
                    days.push_back(total);
                    total = 0;
                }
            }
        }
        if(total > 0) days.push_back(total);
        unsigned long long ans = 0;
        for(auto val: days){
            if(val >= k){
                ans += (1LL*(val-k+1)*(val-k+2))/2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

