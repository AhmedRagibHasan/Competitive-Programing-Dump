#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        if(n<5 || n==6){
            cout<<"Yes\n";
        }
        else if(n%2==1){
            cout<<"No\n";
        }
        else if((n-10)%4==0){
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
        }
    }
    return 0;
}