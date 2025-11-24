#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int h,x,y;

        cin>>h>>x>>y;

        int rem_h = h - y;

        int cnt = 1;

        if(rem_h > 0)
        {
            while(rem_h>0)
            {
                rem_h = rem_h - x;
                cnt++;
            }
        }
        

        cout<<cnt<<"\n";
    }

    
    return 0;
}