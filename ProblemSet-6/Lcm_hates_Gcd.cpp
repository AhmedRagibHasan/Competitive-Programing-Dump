#include <bits/stdc++.h>
using namespace std;

int LCM(long int a,long int b)
{

    return (a / __gcd(a, b)) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while (t--)
    {
        long long a, b;

        cin >> a >> b;

        cout<<LCM(a,a) - __gcd(b,a)<<"\n";
    }
    return 0;
}