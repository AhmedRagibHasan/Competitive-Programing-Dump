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

        int a = n;

        int cnt_1 = 0;

        while(a>0)
        {
            if(a % 2 == 1)
            {
                cnt_1++;
            }

            a = a/2;


        }


        if(cnt_1 % 2 == 0)
        {
            cout<<"EVEN"<<"\n";
        }
        else
        {
            cout<<"ODD"<<"\n";

        }
    }
    
    return 0;
}