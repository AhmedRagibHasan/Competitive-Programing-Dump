#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;

        cin >> s;

        //   int l = 0 , r = n-1;

        bool left_1 = false;

        bool right_1 = false;

        int cnt0 = 0;

        int left_1_idx = -1;

        int right_1_idx = -1;

        for (int i = 0 ; i < n; i++)
        {

            if (left_1 == false && s[i] == '1')
            {
                left_1 = true;
                left_1_idx = i;
            }
            
        }



        for (int i = n-1; i >= 0; i--)
        {
            if (right_1 == false && s[i] == '1')
            {
                right_1 = true;
                right_1_idx = i;
            }
        }
        

        if (left_1_idx == -1)
        {
            cout << 0 << "\n";
            continue;
        }
        else
        {
            for (int i = left_1_idx; i < right_1_idx; i++)
            {
                if (s[i] == '0')
                {
                    cnt0++;
                }
            }

            cout << cnt0 << "\n";
        }
    }

    return 0;
}