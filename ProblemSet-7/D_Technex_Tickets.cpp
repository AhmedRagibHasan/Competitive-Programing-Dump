#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        int s = 2;

        int pos_1 = 2, pos_3 = 5;

        if(n == 1 || n== 3)
        {
            cout<<1<<"\n";
        }
        else
        {
            while (n != pos_1 && n != pos_3 )
            {
                s++;
                pos_1 += 2;
                pos_3 += 2;
            }

            cout<<s<<"\n";
            

        }
    }
    
    return 0;
}