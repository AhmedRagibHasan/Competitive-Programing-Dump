#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int x,y;
        cin >> x>>y;

        // cout<<x<<" "<<y<<endl;

        // int size = x + y;

        vector<int> v;

        

        for (int i = x; i <= y; i++)
        {
            if(i % x == 0)
            {
                v.push_back(i);

            }
        }

        // for(int i : v)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<"\n";
        // int vsize = v.size();

        int even =0,odd=0;

        for(int i : v)
        {
            if(i%2 == 0)
            {
                even = even + i;
            }
            else
            {
                odd = odd + i ;
            }
        }

        if(even>=odd)
        {
            cout<<"YES"<<'\n';
        }
        else if(even < odd)
        {
            cout<<"NO"<<'\n';


        }

        
        
    }

    return 0;
}