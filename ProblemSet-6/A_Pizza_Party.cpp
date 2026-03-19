#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;

    cin >> a >> b;

    int slices = a * 4 + b * 3 + 1;

    int pizza = 0;

    if (slices > 8)
    {
        if (slices % 8 == 0)
        {
            pizza = ceil(slices / 8) ;
            cout << pizza << "\n";
        }
        else
        {
            pizza = ceil(slices / 8)+1;
            cout << pizza << "\n";
        }
    }
    else
    {
        cout << 1 << "\n";
    }

    return 0;
}