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


        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        int streak = 0;

        int days = 0;

        for (int i = 0; i < n; i++)
        {
            if(a[i] > 0)
            { 
                days++;
                streak = max(streak,days);

            }
            else
            {
                days = 0;
                
            }
        }
    
        cout<<streak<<"\n";


        
        
    }
    
    return 0;
}