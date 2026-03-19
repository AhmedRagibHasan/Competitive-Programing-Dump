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

        

        map<int,int> freq;


        for (int i = 0; i < n; i++)
        {
            int val;
            cin>>val;

            freq[val]++;
        }

        int ans = -1;

        int mxcnt = 0;

        for(auto &i : freq)
        {
            int color = i.first;
            int cnt = i.second;

            if(cnt> mxcnt)
            {
                mxcnt = cnt;
                ans = color;
            }



        }

        cout<<ans<<"\n";



        
    }
    


    return 0;
}