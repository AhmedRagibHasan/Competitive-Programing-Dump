#include <bits/stdc++.h>
using namespace std;

// CF-Rating 1600

long long int LCM(long long a, long long b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, a, b, p, q;

    cin >> n >> a >> b >> p >> q;

    long long cnt1 = (n / a) * p, cnt2 = (n / b) * q, overlap = (n / LCM(a, b));

    long long ans = ((cnt1 + cnt2) - (overlap * (p + q))) + (overlap * max(p, q));

    // // to understand the observtion

    // // how many values are divisible by a(2(test 2)) from 1 - n(1-20(test 2))

    // cout << (n / a) << "\n";

    // // how many values are divisible by b(3(test 2)) from 1 - n(1-20(test 2))

    // cout << (n / b) << "\n";

    // // how many values are divisible by both a(2(test 2)) and  b(3(test 2)) from 1 - n(1-20(test 2))

    // cout<<n/LCM(a,b)<<"\n";

    cout << ans << "\n";

    return 0;
}