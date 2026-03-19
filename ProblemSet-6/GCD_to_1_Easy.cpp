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
        long long int n,m;
        cin>>n>>m;

        long long v3 = 3,v2 = 2; 

        vector<vector<long long>> a(n,vector<long long>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(i % 2 == 0)
                {
                    a[i][j] = v3;
                    v3++;
                }
                else
                {
                    a[i][j] = v2;
                    v2++;
                }
                
            }
            
        }


         for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout<<a[i][j]<<" ";
                
            }
            cout<<"\n";
            
        }


        
    }
    return 0;
}