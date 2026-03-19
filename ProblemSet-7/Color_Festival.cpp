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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

        }

        set<int> color;


        for (int i = 0; i < n; i++)
        {
            color.insert(a[i]);

        }


        int jolt = color.size();
            

        

        cout <<jolt<< "\n";
    }

    return 0;
}