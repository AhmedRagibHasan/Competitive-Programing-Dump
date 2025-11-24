#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,xsum;

    cin>>n>>xsum;

    map<long long int, long long int> sum_fre;

    sum_fre[0] = 1;

    long long int sum = 0;

    long long int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;

        sum += x;

        ans += sum_fre[sum - xsum];
        
        sum_fre[sum]++;


    }


    cout<<ans<<"\n";

    




    return 0;
}