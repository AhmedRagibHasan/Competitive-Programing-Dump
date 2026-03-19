#include <bits/stdc++.h>
using namespace std;
#define ll long long

void print_arr(vector<int> &arr)
{
    for (int i : arr)
        cout << i << " ";
    cout << "\n";
}

void solve() {
    int n,c;
    cin >> n>>c;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    string s;
    cin>>s;
    int coin=0;
    bool paid=false;
    vector<pair<char,int>> v(n);
    int normal=0,sp=0;
    for (int i = 0; i < n; i++)
    {
       if(s[i]=='0') normal+=arr[i];
       if(s[i]=='1') sp+=arr[i];
    }
    
    int ans=normal;
   if(normal>=c){
     ans=max(normal,(normal+sp-c));
   }
    cout <<ans << "\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}