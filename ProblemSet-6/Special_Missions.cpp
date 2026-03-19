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
        int n, c;

        cin >> n >> c;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        string s;

        cin >> s;

        int wallet0 = 0, wallet1 = 0;

        // bool payed_once = false;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                wallet0 += v[i];
            }
            else
            {
                wallet1 += v[i];
            }
        }

        if(wallet1 > c && wallet0 >=c)
        {
            wallet0 = (wallet0 - c) + wallet1; 
        }


        // for (int i = 0; i < n; i++)
        // {

        //     if (s[i] == '1')
        //     {
        //         if (payed_once == false && wallet >= c)
        //         {
        //             wallet = wallet - c;
        //             // cout<<"\n";
        //             // cout<<"money in wallet after paying special mission fee"<<"\n";
        //             // cout<<wallet<<"done"<<"\n";
        //             wallet += v[i];
        //             payed_once = true;
        //         }
        //         else if (payed_once == true)
        //         {
        //             wallet += v[i];
        //         }
        //     }
        // }

        cout << wallet0 << "\n";
    }
    return 0;
}