#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int jar1 = 1, jar2 = 1, jar3 = 1;

        if (n % 2 == 0)
        {
            int temp = n - 2;

            jar1 = 1;
            jar2 = 1;
            jar3 = temp;
        }
        else
        {
            int temp = n - 1;

            jar1 = 1;

            jar2 = temp / 2;

            jar3 = jar2;
        }

        cout << jar1 << " " << jar2 << " " << jar3 << "\n";
    }
    return 0;
}