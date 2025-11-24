//input


// 7 20
// 2 6 4 3 6 8 


//output

// 4





#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, s;
    if (!(cin >> n >> s)) return 0;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    long long best = 0;

    // Brute force: try every starting index l and every ending index r >= l
    for (int l = 0; l < n; ++l) {
        long long sum = 0;
        for (int r = l; r < n; ++r) {
            sum += a[r];
            if (sum <= s) {
                long long len = r - l + 1;
                if (len > best) best = len;
            }
            // optional early break: if sum already > s and all a[i] are positive,
            // further extending r will only increase sum, so we could break.
            // But since this is a brute-force demonstration, leaving it is fine.
            // if (sum > s) break;
        }
    }

    cout << best << '\n';
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//      int n,s;

//      cin>>n>>s;

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     int ans = 0;

//     int sum = 0;
    

//     for (int i = 0; i < n; i++)
//     {
//          for (int j = 1; j < n; i++)
//          {

//             sum += a[i] + a[j];


            
//          }
         
//     }
    




//     return 0;
// }


