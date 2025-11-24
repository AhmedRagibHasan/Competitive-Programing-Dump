#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, x;
    cin >> n >> x;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long cnt = 0;
    long long sum = 0;
    int l = 0, r = 0;

    while (l < n)
    {
        if (sum < x && r < n)
        {
            sum += v[r];
            r++;
        }
        else if (sum == x)
        {
            cnt++;
            sum -= v[l];
            l++;
        }
        else
        {
            sum -= v[l];
            l++;
        }

        if (r == n && sum < x) 
        {
            break;
        } 
    }

    cout << cnt << '\n';
    return 0;
}
