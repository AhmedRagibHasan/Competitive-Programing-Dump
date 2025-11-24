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

        vector<int> v(n);

        

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt1 = 0, cnt2 = 0, cnt3 = 0;

        for (int i = 0; i < n; i++)
        {

            if (v[i] == 1)
            {
                cnt1++;
            }
            else if (v[i] == 2)
            {
                cnt2++;
            }
            else if (v[i] == 3)
            {
                cnt3++;
            }
        }

        int cnt = min(cnt1,cnt3) + max(0,cnt2-1);
        
        

        cout << cnt << "\n";
    }
    return 0;
}