#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int a, b;
        cin >> a >> b;
        if (b % a == 0)
        {
            long long int x = b;
            long long int lcm = (a * x) / __gcd(a, x);
            cout << lcm - __gcd(b, x) << endl;
        }
        else {
            long long int x = __gcd(a, b);
            long long int lcm = (a * x) / (__gcd(a, x));
            long long int gcd = __gcd(b, x);
            cout << lcm - gcd << endl;
        }

    }
    return 0;
}