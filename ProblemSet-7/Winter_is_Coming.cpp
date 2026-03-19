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
        int n, a, b;

        cin >> n >> a >> b;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int j_cnt = 0;
        bool jacket = false;

        for (int i = 0; i < n; i++)
        {
            if (v[i] < a)
            {
                if (jacket == false)
                {

                    jacket = true;
                    j_cnt++;
                    
                }
            }
            else if (v[i] > b)
            {
             jacket = false;
            }
        }

        cout << j_cnt << "\n";
    }

    return 0;
}