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
        int n,r ,p;

        cin>>n;

        // cout<<n<<" ";

        int cur_p = 1000;

        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            cin>>r>>p;

            // cout<<"rating : "<<r<<"ticker price : "<<p<<" ";

            if(r>=7)
            {
                cur_p = min(cur_p,p);
                flag = true;
            }



        }

        if(flag)
        {
            cout<<cur_p<<"\n";

        }
        else
        {
            cout<<-1<<"\n";
        }

        
        
    }
    return 0;
}