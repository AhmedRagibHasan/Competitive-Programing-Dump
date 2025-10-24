#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int p[1000], a[1000];
        for (int i = 0; i < n; i++)
            cin >> p[i];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = -1, r = -1;

        for (int i = 0; i < n; i++)
        {
            if (p[i] != a[i])
            {
                if (l == -1)
                    l = i + 1;
                r = i + 1;
            }
        }

        cout << "! " << l << " " << r << endl;
    }
    return 0;
}
