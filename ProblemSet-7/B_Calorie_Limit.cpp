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
        int n,k;

        cin>>n>>k;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        int cnt = 0;

        int sum = 0;

        for (int i = 0; i < n; i++)
        {

            
            if(sum <= k  )
            {
                sum += v[i];
                if(sum>k)
                {
                    break;
                }
                cnt++;
            }

            
        }

        cout<<cnt<<"\n";
        
    }
    
    return 0;
}