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
        int a[n];

        int one_cnt = 0;
        int num_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(a[i] == 1)
            {
                one_cnt++;
            }
            else
            {
                num_cnt++;
            }
        }

        int ans = num_cnt + (one_cnt+1)/2;

       

        cout<<ans<<"\n";
        

        

        
    }
    return 0;
}