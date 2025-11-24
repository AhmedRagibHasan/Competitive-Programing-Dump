#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    while (test--)
    {
        long long int size, queries;
        cin >> size >> queries;

        vector<long long int> v(size + 1);
        for (long long int i = 1; i <= size; i++)
        {
            cin >> v[i];
        }

        while (queries--)
        {   
            vector<long long int> v1 = v;

            long long int sum = 0;

            long long int l, r, k;
            cin >> l >> r >> k;

            for (long long int j = l; j <= r; j++)
            {
                v1[j] = k;
            }

            for (long long int x = 1; x <= size; x++)
            {   
                sum += v1[x];
            }
            cout << (sum % 2 != 0 ? "YES" : "NO") << endl;
        }
    }
    return 0;
}