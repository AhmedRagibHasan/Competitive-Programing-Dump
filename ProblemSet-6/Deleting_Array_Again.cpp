// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;

//     cin >> t;

//     while (t--)
//     {
//         int n;

//         cin >> n;

//         vector<int> a(n);
//         vector<int> c(n);

//         for (int i = 0; i < n; i++)
//         {

//             cin >> a[i];
//         }

//         for (int i = 0; i < n; i++)
//         {

//             cin >> c[i];
//         }

//         int cmin = 1000;

//         int ans = 0;

//         for (int i = 1; i <= n; i++)
//         {
//             cmin = min(c[i], cmin);
//         }

//         while (!a.empty())
//         {
//             int cost = INT_MAX;

//             int idx = 0;
//             for (int i = 0; i < a.size(); i++)
//             {
//                 int cur_cost = a[i] * c[i];

//                 if (cur_cost < cost)
//                 {
//                     cost = cur_cost;
//                     idx = i;
//                 }
//             }

//             ans += cost;

//             a.erase(a.begin() + idx);
//         }

//         cout << ans << "\n";
//     }
//     return 0;
// }

// Solve 2

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        
        vector<int> a(n+1),c(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            
        }
        for(int i=1;i<=n;i++)
        {
            cin>>c[i];
        }
        ll sum=0;
        int cnt=INT_MAX;

        for(int i=1;i<=n;i++)
        {
            if(c[i]<cnt)
            {
                cnt=c[i];
            }
            sum+= (a[i]*cnt);

        }

        cout<<sum<<endl;

    }
    return 0;
}
