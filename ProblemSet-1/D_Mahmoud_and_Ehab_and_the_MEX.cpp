#include <bits/stdc++.h>
using namespace std;

// MEX

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int op = 0;

    for (int i = 0; i < x; i++)
    {
        bool found = false;
        for (int v : a)
        {
            if (v == i)
            {

                found = true;
                break;
            }
        }
        if (!found)
        {
            op++;
        }
    }

    bool flag = false;

    for (int v : a)
    {
        if (v == x)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        op++;
    }

    cout << op << "\n";

    return 0;
}