#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n,k;
        cin >> n >>k;

        vector<int> a(n);
        

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            
        }

        sort(a.rbegin(),a.rend());


        

        int prof = 0;


        for (int i = 0; i < n; i++)
        {
            if(i<k)
            {
                
                prof = prof + max(0,a[i]-5);
            }
            else
            {
                
                prof = prof + max(0,(a[i]-10));
            }
        }
        

        cout<<prof<<"\n";
    }
}