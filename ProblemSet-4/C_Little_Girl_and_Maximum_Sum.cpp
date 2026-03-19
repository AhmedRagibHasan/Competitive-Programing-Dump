#include <bits/stdc++.h>
using namespace std;

//CF Rating 1500

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    vector<int> d(n+1);

    for (int i = 0; i < q; i++)
    {
        int l,r;
        
        cin>>l>>r;

        l--,r--; //because l and r are assumed 0 based index but in the statement they are assumed 1 based so we make em -1
        d[l]++;
        d[r+1]--;
    }


    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i-1] + d[i];

    }

    sort(a.rbegin(), a.rend());
    sort(d.rbegin(), d.rend());

    long long int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += (1LL * a[i] * d[i]);
    }

    cout<<ans<<"\n";
    


    return 0;
}