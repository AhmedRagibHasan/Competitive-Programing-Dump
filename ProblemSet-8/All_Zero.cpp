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
        int a, b, c;

        cin >> a>> b>> c;

        bool flag = false;

        for (int x = 0; x <= 20; x++)
        {
            for (int y = 0; y <= 20; y++)
            {

                int a1 = a - x;
                int b1 = b - 2 * x - y;
                int c1 = c - 3 * y;

                if (a1 == 0 && b1 == 0 && c1 == 0)
                {
                    flag = true;
                }
                    
            }
        }

        if(flag)
        {
            cout<<"Yes"<<"\n";
        }
        else
        {
            cout<<"No"<<"\n"  ;      
        }


    }

    return 0;
}

