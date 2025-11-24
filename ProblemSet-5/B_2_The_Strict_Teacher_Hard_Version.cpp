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
        int n,m,q;

        cin>>n>>m>>q;

        vector<int> b(m);

        for(auto &val : b)
        {
            cin>>val;
        }

        sort(b.begin(),b.end());

        while(q--)
        {
            int a;
            cin>>a;

            auto it = upper_bound(b.begin(),b.end(), a);

            if(it == b.end()) //means no teacher at right side of devid
            {
                it--;
                cout<< n - *it<<"\n";

            }
            else if(it == b.begin()) //means no teacher at left side of david
            {
                

                cout<< *it -1 <<"\n";

            }
            else // means teachers are at both sides of david  and david is at middle
            {
                int porer_teacher = *it;
                it--;
                int ager_teacher = *it;
                int len = (porer_teacher - ager_teacher) -1;

                cout<<(len + 1)/2<<"\n";


            }
        }


    }
    return 0;
}