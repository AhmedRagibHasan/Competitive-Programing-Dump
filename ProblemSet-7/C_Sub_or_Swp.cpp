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
        long long int x, y;

        cin >> x >> y;

        int temp = 0;

        // while (x > 0)
        // {
        //     if(x>y)
        //     {
        //         swap(x,y);
                
        //     }
        //     else
        //     {
        //         int tempy = x;
        //         x= y-x;

        //         y = tempy;


        //     }
        // }
        

        

        cout << __gcd(x,y) << "\n";
    }
    return 0;
}