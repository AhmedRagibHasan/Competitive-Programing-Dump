#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    long long k;

    cin >> n >> k;

    vector<long long int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0;

    long long int sum = 0, ans = 0;

    while (r < n)
    {
        sum += a[r];
        while(sum >= k && l<=r)
        {
            ans += n-r;

            sum -=a[l];

            l++;

            
            
        }

        r++;
    }

    cout << ans << "\n";

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     long long s;
//     cin >> n >> s;

//     vector<long long> a(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     long long ans = 0;
//     long long sum = 0;

//     int r = 0;

//     for (int l = 0; l < n; l++) {

//         while (r < n && sum < s) {
//             sum += a[r];
//             r++;
//         }

//         if (sum >= s) {
//             ans += (n - r + 1); 
//         }

//         sum -= a[l];
//     }

//     cout << ans << "\n";
//     return 0;
// }
